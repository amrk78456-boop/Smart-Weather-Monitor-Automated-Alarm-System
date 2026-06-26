# Smart Weather Monitor & Automated Alarm System

An Arduino-based Embedded System that monitors real-time environmental data (Temperature and Humidity) using a DHT11 sensor and triggers a multi-channel safety alarm (Audible Sounder + Visual LED) when critical thermal thresholds are exceeded.

---

## 🚀 Features
* **Real-time Monitoring:** Continuous tracking of relative humidity (%) and temperature (°C).
* **Automated Decision Making:** Hardware-level threshold detection (Triggers at $\ge 35^\circ\text{C}$).
* **Dual-Channel Alert System:** Combined visual (LED) and audible (Digital Sounder) indicators for industrial safety compliance.
* **Serial Telemetry:** Outputs formatted data streams for debugging and monitoring via Serial Monitor.

---

## 🛠️ Hardware Components (Simulated in Proteus)
* **Microcontroller:** Arduino Uno (ATmega328P)
* **Sensors:** DHT11 Digital Temperature & Humidity Sensor
* **Indicators:** Digital Sounder & Red LED (with $330\,\Omega$ Current-Limiting Resistor)
* **Debugging Tools:** Virtual Terminal (Serial Telemetry)

---

## 🔌 Circuit Connection (Pin Mapping)
| Component | Arduino Pin | Description |
| :--- | :---: | :--- |
| **DHT11 (Data)** | `D2` | Digital I/O for Sensor Telemetry |
| **Buzzer/Sounder** | `D8` | Digital Output for Audible Alarm |
| **LED (Anode)** | `D9` | Digital Output for Visual Alarm |

---

## 💻 Firmware Implementation
The firmware leverages the `DHT sensor library by Adafruit` to handle the digital serial protocol of the DHT11 sensor. Check the main `.ino` file for the complete source code.
