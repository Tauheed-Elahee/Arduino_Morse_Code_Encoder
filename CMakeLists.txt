set(CMAKE_TOOLCHAIN_FILE cmake/ArduinoToolchain.cmake)

# set(${FIRMWARE_NAME}_PORT /dev/ttyACM0)

cmake_minimum_required(VERSION 2.8)

project(testArduinoCmake C CXX)

# print_board_list()
# print_programmer_list()

add_subdirectory(src)
