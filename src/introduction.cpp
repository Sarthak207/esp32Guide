/*  
** Features **
1) Comes with ESP-WROOM-32 chip
2) 3.3V voltage regulator:- drops the i/p V to power esp32
3) CP2102 chip:- to program it w/o FTDI programmer

** Specifications **
1) dual core
2) wifi & bluetooth built-in
3) runs 32 bit programs
4) clock freq:- upto 240MHz
5) RAM:- 512 KB


** More about clock frequency **

1) The clock frequency of a microcontroller is the rate at which its internal CPU executes instructions. 
2) It’s usually measured in Hertz (Hz), most often MHz (millions of cycles per second).

🔹 Why It Matters

1) Instruction Speed:- Each instruction may take 1 or more clock cycles.
2) Peripheral Timing:- Timers, UART, SPI, PWM, and other peripherals are derived from the system clock.

* Performance vs. Power
1) Higher clock frequency = faster code, but also more power consumption and heat.
2) Many microcontrollers allow you to adjust the clock (run slower for battery saving, faster for performance).

*/