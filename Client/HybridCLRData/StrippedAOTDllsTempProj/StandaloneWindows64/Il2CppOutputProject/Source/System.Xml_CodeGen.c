#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C (void);
// 0x00000003 System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// 0x00000004 System.Int32 System.Xml.XmlReader::get_Depth()
// 0x00000005 System.Boolean System.Xml.XmlReader::Read()
// 0x00000006 System.Int32 System.Xml.XmlReader::ReadContentAsBase64(System.Byte[],System.Int32,System.Int32)
extern void XmlReader_ReadContentAsBase64_mE871FE7EE58990122EEDD46402724B5F45157B00 (void);
// 0x00000007 System.Void System.Xml.XmlReader::.cctor()
extern void XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E (void);
// 0x00000008 System.Void System.Xml.XmlWriter::WriteBase64(System.Byte[],System.Int32,System.Int32)
// 0x00000009 System.String System.Xml.Res::GetString(System.String,System.Object[])
extern void Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B,
	SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C,
	NULL,
	NULL,
	NULL,
	XmlReader_ReadContentAsBase64_mE871FE7EE58990122EEDD46402724B5F45157B00,
	XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E,
	NULL,
	Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83,
};
static const int32_t s_InvokerIndices[9] = 
{
	6694,
	6110,
	0,
	0,
	0,
	1022,
	7712,
	0,
	6694,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Xml_CodeGenModule;
const Il2CppCodeGenModule g_System_Xml_CodeGenModule = 
{
	"System.Xml.dll",
	9,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
