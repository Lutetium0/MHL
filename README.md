# MHL
一个基于MotionFramework+HybridCLR+Luban+Moon的轻量游戏开发全栈解决方案
- MotionFramework：Unity客户端框架
- HybridCLR：C#热更方案
- Luban：游戏配置导表工具
- Moon：基于Actor模型的轻量级服务器框架（C++底层+Lua业务层）

# QuickStart

客户端：使用Unity打开Client文件夹下的项目后运行Assets/ProjectDir/文件夹下的GameLauncher场景

服务器：服务器文件夹内容与MoonDemo下的server文件夹内容一致，具体编译及启动流程参考https://github.com/sniper00/MoonDemo

已验证过的前后端环境：

客户端环境：
- 系统：Windows11
- Unity客户端版本：2021.3.24f1

服务器环境：
- 系统：Ubuntu 20.04.1
- gcc编译器版本：9.4.0
- redis server：5.0.7
- mysql：5.7（10.3.38-MariaDB）

# Dependencies

- [MotionFramework](https://github.com/gmhevinci/MotionFramework)
- [HybridCLR](https://github.com/focus-creative-games/hybridclr)
- [Luban](https://github.com/focus-creative-games/luban)
- [Moon](https://github.com/sniper00/moon)
