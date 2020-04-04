MCU  = STM32F303

# General

BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE  = yes      # Mouse keys
EXTRAKEY_ENABLE  = yes      # Audio control and System control
TERMINAL_ENABLE  = yes
UNICODEMAP_ENABLE   = yes

# Debug

CONSOLE_ENABLE    = yes     # Console for debug
COMMAND_ENABLE    = yes     # Commands for debug and configurationqqqq


# Light and Audio

SLEEP_LED_ENABLE  = no      # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE  = no      # Enable keyboard backlight functionality
RGBLIGHT_ENABLE   = no      # Enable keyboard RGB underglow
MIDI_ENABLE       = no      # MIDI support
AUDIO_ENABLE      = no      # Audio output on port C6

# Extras

BLUETOOTH_ENABLE  = no      # Enable Bluetooth with the Adafruit EZ-Key HID
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE    = no      # Enable support for HD44780 based LCDs

NKRO_ENABLE       = no      # USB Nkey Rollover.
                            # https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

