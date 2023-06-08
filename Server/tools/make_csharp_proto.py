
import os
import make_annotations

proto_csharp_map = dict()
proto_csharp_map["int32"] = "int"
proto_csharp_map["int64"] = "long"
proto_csharp_map["uint32"] = "uint"
proto_csharp_map["uint64"] = "ulong"
proto_csharp_map["sint32"] = "int"
proto_csharp_map["sint64"] = "long"
proto_csharp_map["fixed32"] = "int"
proto_csharp_map["fixed64"] = "long"
proto_csharp_map["sfixed32"] = "int"
proto_csharp_map["sfixed64"] = "long"
proto_csharp_map["bool"] = "bool"
proto_csharp_map["float"] = "float"
proto_csharp_map["double"] = "double"
proto_csharp_map["string"] = "string"
proto_csharp_map["bytes"] = "byte[]"

def to_csharp_type(prototype):
    if prototype in proto_csharp_map:
        return proto_csharp_map[prototype]
    else:
        return prototype


def make_enum(name, fields):
    res = "[ProtoContract(Name = \"{}\")]".format(name)
    res += "    enum  {} = {\n".format(name)
    for line_tuple in fields:
        if line_tuple[0] is not None:
            if len(line_tuple) == 3:
                if line_tuple[2] is not None:
                    res +=  "        {0} = {1}, //{3}\n".format(line_tuple[0], line_tuple[1], line_tuple[2].strip('\n \t/'))
                else:
                    res +=  "        {0} = {1}, //{3}\n".format(line_tuple[0], line_tuple[1])
            else:
                print("wrong enum", line_tuple)
    res += "    }\n\n"
    return res

def make_proto(proto_list_with_file, output_dir, ignore_file_list):

    for filepath, proto_list in proto_list_with_file.items():
        parentpath, filename = os.path.split(filepath)
        shotname, extension = os.path.splitext(filename)
        if shotname in ignore_file_list:
            continue

        content = "using System.Collections.Generic;\nusing ProtoBuf;\n\nnamespace NetMessage{\n"
        for one in proto_list:
            protoType = one[0]
            name = one[1]
            fields = one[2]

            if protoType == make_annotations.ProtoType.Message:
                content += "    [ProtoContract]\n"
                content += "    class {0}{{\n".format(name)
                for line_tuple in fields:
                    if line_tuple[0] == "repeated":
                        content +="        [ProtoMember({0},Name = @\"{1}\")]\n".format(line_tuple[3], line_tuple[2])
                        content +="        public List<{0}> {1} {{ get; set; }}".format(to_csharp_type(line_tuple[1]), line_tuple[2].capitalize())
                        if line_tuple[4]:
                            content += "//"+ line_tuple[4].strip('\n \t/')
                        content += "\n"
                    elif line_tuple[0] == "map":
                        content +="        [ProtoMember({0},Name = @\"{1}\")]\n".format(line_tuple[4], line_tuple[3])
                        content +="        public Dictionary<{0},{1}> {2} {{ get; set; }}".format(to_csharp_type(line_tuple[1]), to_csharp_type(line_tuple[2]), line_tuple[3].capitalize())
                        if line_tuple[5]:
                            content += "//"+ line_tuple[5].strip('\n \t/')
                        content += "\n"
                    else:
                        content +="        [ProtoMember({0}, Name = @\"{1}\")]\n".format(line_tuple[3], line_tuple[2])
                        content +="        public {0} {1} {{ get; set; }}".format(to_csharp_type(line_tuple[1]), line_tuple[2].capitalize())
                        if line_tuple[4]:
                            content += "//"+ line_tuple[4].strip('\n \t/')
                        content += "\n"
                content += "    }\n\n"
            elif protoType == make_annotations.ProtoType.Enum:
                content += make_enum(name, fields)
        content += "}\n\n"


        with open(os.path.join(output_dir, shotname.capitalize() +".cs"), "w+", encoding='utf-8') as fobj:
            fobj.write(content)
