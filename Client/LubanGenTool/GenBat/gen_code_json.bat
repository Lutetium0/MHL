set WORKSPACE=..\..

set GEN_CLIENT=%WORKSPACE%\LubanGenTool\Tools\Luban.ClientServer\Luban.ClientServer.exe
set CONF_ROOT=%WORKSPACE%\LubanGenTool\DesignerConfigFiles

%GEN_CLIENT% -j cfg --^
 -d %CONF_ROOT%\Defines\__root__.xml ^
 --input_data_dir %CONF_ROOT%\Data ^
 --output_code_dir %WORKSPACE%\Assets\ProjectDir\HotUpdate\LubanGenConfigScripts ^
 --output_data_dir %WORKSPACE%\Assets\ProjectDir\Bundles\LubanGenConfigData ^
 --gen_types code_cs_unity_json,data_json ^
 -s all

pause
