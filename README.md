# Furnace Logger

This project implements a microcontroller-based data logger that will
monitor the thermostat control lines of my gas forced-air furnace.
The goal is to collect some information on how much energy is required
to keep my home at a comfortable temperature on the coldest winter days.
The duty cycle of the furnace can be used along with the specified
output capacity of my furnace to get a baseline on the energy efficiency
of the house, along with a starting point for sizing a heat pump
replacement unit.

A major goal of this project is to use as many of my junk-box parts
as possible.

## Hardware

The
[Olimexino-STM32](https://www.olimex.com/Products/Duino/STM32/OLIMEXINO-STM32/open-source-hardware)
microcontroller board was chosen because it is the
only board in my collection with a built-in microSD card slot.
In addition, an I2C real time clock module (with battery backup) will
be added so that timekeeping can be kept through power failures.
While the
[STM32F103RBT6](https://www.st.com/en/microcontrollers-microprocessors/stm32f103rb.html)
MCU does have a built-in RTC peripheral, the only battery backup solution
of the Olimexino-STM32 is an external LiPo battery, and I don't have a spare
handy.

For interfacing to the 24VAC furnace control signals, I chose a
[3 channel AC optocoupler module](https://www.amazon.com/dp/B0CHJNRZMW)
from Amazon.com.
The board came with 150k-ohm resistors in place to allow sensing of 220VAC
signals, and I replaced those with 15k-ohm 1W resistors to scale the inputs
down to the 24VAC of my system.
The output of the board is then directly interfaced to the Olimexino-STM32.

## Software

The software is based on the STM32CubeMX configuration tool, and is
implemented in C.

### User Interface

A USB CDC virtual serial port is implemented to enable setting of the RTC,
and to get basic status of operation during implementation and debugging.
