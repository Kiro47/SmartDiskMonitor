cmake_minimum_required(VERSION 3.0)
project(SmartDiskMonitor C)

set(CMAKE_C_STANDARD 99)

add_executable(SmartDiskMonitor client/src/main.c client/src/config/file.c client/src/config/file.h client/src/smartctl/smartctlhook.c client/src/smartctl/smartctlhook.h)