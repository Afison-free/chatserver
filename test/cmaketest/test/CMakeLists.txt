set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories (../include) # 头文件搜索路径
link_directories (${PROJECT_SOURCE_DIR}/lib) # 库文件搜索路径

add_executable (main main.cpp) # 指定生成的可执行文件
target_link_libraries (main cal) # 执行可执行文件需要依赖的库