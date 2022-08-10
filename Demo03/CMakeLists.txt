# cmake的最低版本号要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(Demo03)

# 查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量中
aux_source_directory(. DIR_SRCS)

# 将名为main.cpp的源文件编译成一个名为Demo03的可执行文件
add_executable(Demo03 ${DIR_SRCS})
target_link_libraries(Demo03 log)

# 添加log子目录
add_subdirectory(log)