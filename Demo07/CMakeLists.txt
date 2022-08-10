# cmake的最低版本号要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(Demo07 VERSION 3.4)
# 分别设置系统主版本号和副版本号
# set(Demo07_VERSION_MAJOR 5)
# set(Demo07_VERSION_MINOR 6)

# 加入一个配置头文件，用于处理CMake对源码的设置
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in" "${PROJECT_SOURCE_DIR}/config.h"
)

# 将名为main.cpp的源文件编译成一个名为Demo01的可执行文件
add_executable(Demo07 main.cpp)