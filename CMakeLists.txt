cmake_minimum_required(VERSION 3.10)
project(SmartDiskMonitor C)

set(CMAKE_C_STANDARD 99)

add_executable(SmartDiskMonitor client/src/main.c client/src/utils/stringUtils.c client/src/utils/stringUtils.h)