# cmake的最低版本号要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(Demo04)


# 是否使用自己的log库
option(LINUX_OS "Use log if the platform is Linux" OFF)

# 加入一个配置头文件，用于处理CMake对源码的设置
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in" "${PROJECT_SOURCE_DIR}/config.h"
)

# 查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量中
aux_source_directory(. DIR_SRCS)

# 将名为main.cpp的源文件编译成一个名为Demo03的可执行文件
add_executable(Demo04 ${DIR_SRCS})

# 是否加入log库
if(LINUX_OS)
    include_directories("${PROJECT_SOURCE_DIR}/log")
    add_subdirectory(log)
    target_link_libraries(Demo04 log)
endif(LINUX_OS)




