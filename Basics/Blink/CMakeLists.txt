cmake_minimum_required(VERSION 3.0)

# Set the project name and language
project(led CXX)

# Set the path to the Arduino toolchain file
set(CMAKE_TOOLCHAIN_FILE /path/to/ArduinoToolchain.cmake)

# Set the board type and serial port
set(ARDUINO_BOARD uno)
set(ARDUINO_PORT /dev/ttyACM0)

# Set the path to the AVR header files
include_directories(/path/to/avr/headers)

# Add the main program and Leds class
add_executable(led main.cpp Led.hpp)

# Set the board properties
set_target_properties(led PROPERTIES
  ARDUINO_BOARD ${ARDUINO_BOARD}
  ARDUINO_PORT ${ARDUINO_PORT}
)

# Add a target to upload the program to the board
add_custom_target(upload
  COMMAND avrdude -C/path/to/avrdude.conf -v -patmega328p -carduino -P${ARDUINO_PORT} -b115200 -D -Uflash:w:${CMAKE_CURRENT_BINARY_DIR}/led.hex:i
  DEPENDS led
)
