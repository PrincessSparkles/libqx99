#
# CMakeLists.txt
#
# cmake file for the libqx99 project
# inspired by http://rix0r.nl/blog/2015/08/13/cmake-guide/
#
# (c) 2017 qx99.co.uk
#

#
# define the project
#
project(libqx99 VERSION 0.1 LANGUAGES CXX)

#
# list the source files
#
add_library(qx99
	src/range.cpp)
	
#
# We're using C++14
#
set_property(TARGET qx99 PROPERTY CXX_STANDARD 14)

#
# Sort out the include paths. PUBLIC headers will be added to consumers
# build paths 
#
target_include_directories(qx99 
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        src)
