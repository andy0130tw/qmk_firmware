# Build options
#   change yes to no to disable
BOOTMAGIC_ENABLE = no       # Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and system control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
DYNAMIC_KEYMAP_ENABLE = no  # Reconfigurable keyboard without flashing firmware
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash
NKRO_ENABLE = yes           # USB N-key rollover
RAW_ENABLE = yes            # Raw HID commands (used by Keyboard Configurator)
BACKLIGHT_ENABLE = yes      # RGB backlight (conflicts with RGB matrix)
BACKLIGHT_DRIVER = pwm
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = no      # RGB matrix
RGB_MATRIX_CUSTOM_KB = no   # Custom keyboard effects
AUDIO_ENABLE = no           # Audio output
LTO_ENABLE = yes            # Link-time optimization for smaller binary
NO_SUSPEND_POWER_DOWN = yes # Do not put the microcontroller into power saving mode

# Add analog component
SRC += analog.c

# Add System76 EC command interface
SRC += system76_ec.c
