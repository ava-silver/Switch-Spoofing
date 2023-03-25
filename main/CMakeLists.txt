
idf_component_register(
        SRCS "connect.c" "gamepad.c" "hid_command.c" "hid_controller.c" "main.c" "pair.c" "spi.c" "spoofing.c" "uart_controller.c" "wiimote.c" 
        INCLUDE_DIRS "${CMAKE_CURRENT_BINARY_DIR}" "include")


