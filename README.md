# HardWareSerial_Due_To_ESP_Due_Code_
--> For_Due
The Arduino Due has three additional 3.3V TTL serial ports: Serial1 on pins 19 (RX) and 18 (TX); Serial2 on pins 17 (RX) and 16 (TX), Serial3 on pins 15 (RX) and 14 (TX). Pins 0 and 1 are also connected to the corresponding pins of the ATmega16U2 USB-to-TTL Serial chip, which is connected to the USB debug port. Additionally, there is a native USB-serial port on the SAM3X chip, SerialUSB'.

--> For_ESP32
There are three serial ports on the ESP32 known as U0UXD, U1UXD and U2UXD all work at 3.3V TTL Level. There are three hardware supported serial interfaces on the ESP32 known as UART0, UART1 and UART2. Like all peripherals, the pins for the UARTs can be logically mapped to any of the available pins on the ESP32. However, the UARTs can also have direct access which marginally improves performance. The pin mapping table for this hardware assistance is as follows.


UART	RXIO	  TXIO	  CTS	  RTS
UART0	GPIO3	  GPIO1	  N/A	  N/A
UART1	GPIO9	  GPIO10	GPIO6	GPIO11
UART2	GPIO16	GPIO17	GPIO8	GPIO7

Having said that, the UART drivers that I recommend to use don’t have this level of optimization built into them and as a result, you are pretty much free to use any pins you choose.
