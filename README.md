# Air Quality Index (AQI) Monitoring System using Arduino 🌫️📊  

Measure air quality. Stay informed.

This project implements a **real-time Air Quality Index (AQI) monitoring system** using **Arduino UNO**, an **MQ-135 air quality sensor**, visual indicators, an audible alarm, and a **16x2 LCD display**.

The system continuously monitors air quality and alerts users when pollution levels exceed safe limits.

Simple design. Practical purpose. Reliable results.

---

## 🧠 Project Overview
Air pollution can negatively impact health, especially in indoor environments.  
This system measures air quality levels in real time and provides **instant feedback** using LEDs, a buzzer, and an LCD display.


### Working Flow

---

## ⚡ Key Features
- Continuous air quality monitoring
- Adjustable air quality threshold
- Audible alert for poor air quality
- Visual status indication using LEDs
- Real-time sensor value display on LCD
- Clean and well-commented Arduino code

Ideal for **academic projects and demonstrations**.

---

## 🔧 Hardware Components
- Arduino UNO  
- MQ-135 Air Quality Sensor  
- Buzzer  
- Red LED (Poor air quality)  
- Green LED (Good air quality)  
- 16x2 LCD Display (Parallel mode)  
- Resistors and jumper wires  

---

## 🔌 Pin Connections

### MQ-135 Sensor
| MQ-135 Pin | Arduino |
|-----------|---------|
| AO | A0 |
| VCC | 5V |
| GND | GND |

### Output Devices
| Device | Arduino Pin |
|------|-------------|
| Buzzer | D8 |
| Red LED | D9 |
| Green LED | D10 |

### LCD (16x2)
| LCD Pin | Arduino Pin |
|--------|-------------|
| RS | D7 |
| EN | D6 |
| D4 | D5 |
| D5 | D4 |
| D6 | D3 |
| D7 | D2 |

---

## 💻 Arduino Logic
- Reads analog value from MQ-135 sensor
- Displays air quality value on LCD
- Compares reading with calibrated threshold
- Activates buzzer and red LED when air quality is poor
- Displays GOOD status using green LED otherwise

---

## ⚙️ Threshold Configuration
```cpp
int threshold = 350; // Adjust after calibration
