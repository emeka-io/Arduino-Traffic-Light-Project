# Arduino Traffic Logic - Phase 1
### My first Arduino project
## Live Demo
See it blinking here: [Link to my X post](https://x.com/EmekaBuilds_/status/2040008618154627471?s=20)

## Circuit Diagram
This layout maps the signal flow from the Arduino to the breadboard.
![Circuit Layout](./assets/circuit-layout-v1.png)

## Physical Build
A pic of the wiring using components of the RFID  Arduino Starter Kit.
![Wiring Layout](./assets/wiring-photo.jpeg)

## Hardware Components
- **Microcontroller:** Arduino Uno R3
- **Component:** Green LED (Anode to Pin 11, Cathode to GND)
- **Protection:** 220Ω Resistor (Bridging Row 10 to 19)

## Logic & Timing
The code implements a basic loop with a 66.67% duty cycle:
- **ON State:** 2000ms 
- **OFF State:** 1000ms
