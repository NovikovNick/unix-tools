cmake_minimum_required (VERSION 3.10)
project ("unix-tools"
    VERSION 0.0.1
    DESCRIPTION "My tools for unix"
    LANGUAGES C)
# if(CMAKE_BUILD_TYPE STREQUAL "Debug") 	
# add_definitions(-DDEBUG) 
# endif()

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

# my ls, nothing special
#add_executable("ls" "src/tools/ls.cc")

# fork process and execute passed command in child process
#add_executable("exec" "src/tools/exec.cc")

# ...
add_executable(copy "src/tools/copy.c")
#set_property(TARGET copy PROPERTY C_STANDARD 99)
