set(ARDUINO_DEFAULT_PORT /dev/ttyACM0)



# 
# 
# # Some installations have renamed the example directories
# if (EXISTS "${ARDUINO_SDK_PATH}/examples/01.Basics/Blink")
#     set(BLINK_SKETCH "${ARDUINO_SDK_PATH}/examples/01.Basics/Blink")
# else()
#     set(BLINK_SKETCH "${ARDUINO_SDK_PATH}/examples/1.Basics/Blink")
# endif()
# 
# generate_arduino_firmware(blink_original
#     SKETCH "${BLINK_SKETCH}"
#     PORT  /dev/ttyACM0
#     SERIAL picocom @SERIAL_PORT@
#     BOARD uno)
# 
#     
#     

link_directories(${ARDUINO_SDK_PATH}/libraries)

generate_arduino_firmware(blink_cpp_test
    SRCS main.cpp # Add Morse_Code.cpp
    PORT /dev/ttyACM0
    BOARD uno
)
