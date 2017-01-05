#
# CMakeLists.txt
#
# cmake file for the libqx99 project
# inspired by http://rix0r.nl/blog/2015/08/13/cmake-guide/
#
# (c) 2017 qx99.co.uk
#

#
# Ensure a good version of CMake is installed
#
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

#
# We're writing C++14
#
set (CMAKE_CXX_STANDARD 14)

#
# This is the libqx99 project
#
project (qx99 VERSION 0.1 LANGUAGES CXX) 