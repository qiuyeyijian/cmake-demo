# 查找当前目录下的所有源文件，并将名称保存到 DIR_LIB_SRCS 变量中
aux_source_directory(. DIR_LIB_SRCS)

#生成链接库
add_library(log STATIC ${DIR_LIB_SRCS})

# 指定 log 库的安装路径
install(TARGETS log DESTINATION ${PROJECT_SOURCE_DIR}/bin)
install(FILES log.h DESTINATION ${PROJECT_SOURCE_DIR}/include)