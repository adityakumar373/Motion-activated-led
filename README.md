# Motion Activated LED using Arduino and PIR Sensor

This project uses an Arduino UNO and a PIR motion sensor to automatically control an LED.

# Components Used:
- Arduino UNO
- PIR Sensor (HC-SR501)
- LED
- Jumper Wires, Breadboard

# How It Works:
When motion is detected, the LED turns ON. When no motion is detected, the LED turns OFF.

# Demo:
This project was simulated in Tinkercad Circuits:- https://www.tinkercad.com/things/3M8AkmHhb0U-led-automation

# What it Demonstrates:
- Real-time motion detection using a PIR sensor
- Automatic LED ON/OFF based on motion detection
- Serial output of "Motion Detected" and "No Motion" messages


## Circuit Diagram:
- PIR sensor OUT -> Arduino pin 2
- LED anode (+) -> Arduino pin 13 (through 220Ω resistor)
- Common GND
