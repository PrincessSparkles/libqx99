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
# list the source files for the library
#
add_library(qx99
	src/range.cpp)
    
#
# Test code source files
#
add_executable(testlibqx99
    test/rangetest.cpp
    test/main.cpp)
	
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

#
# test code
#
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})
include_directories(src)
include_directories(include)

target_link_libraries(testlibqx99
    ${GTEST_LIBRARIES}
    ${GTEST_MAIN_LIBRARIES}
    gmock
    gmock_main
    pthread
    qx99)
    
add_test(testlibqx99
    testlibqx99)
    