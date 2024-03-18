set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
include_directories (../include) 
# 生成库，动态库是SHARED，静态库是STATIC
add_library (cal SHARED cal.cpp)
# 修改库的名字
#set_target_properties (cal PROPERTIES OUTPUT_NAME "libcal")
