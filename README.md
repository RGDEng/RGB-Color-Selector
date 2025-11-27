# 05 RGB Color Selector (Potentiometer Control)

## 📋 Description
This project controls an RGB LED using a potentiometer. The system reads the analog input and changes the LED color (Red, Green, Blue) based on the position of the knob, dividing the range into three distinct zones.

## 🛠️ Hardware Used
* **Microcontroller:** Arduino Uno.
* **Input:** 10kΩ Potentiometer.
* **Output:** RGB LED (Common Cathode).
* **Resistors:** 3x 220Ω (for RGB channels).

## 🧠 Control Logic
The analog input range (0-1023) is divided into three zones to switch colors:
1.  **Zone 1 (0 - 340):** Red Color 🔴
2.  **Zone 2 (341 - 680):** Green Color 🟢
3.  **Zone 3 (681 - 1023):** Blue Color 🔵

## 🔌 Pinout
| Component     | Pin |
| :--- | :--- |
| Potentiometer | A0  |
| Red Pin       | 11  |
| Green Pin     | 10  |
| Blue Pin      | 9   |
