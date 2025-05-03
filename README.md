# Project G.R.O.W.T.H.

**G**reen **R**esponsive **O**peration for **W**atering **T**hrough **H**orticulture

G.R.O.W.T.H. is a smart irrigation system that automates plant watering based on real-time environmental conditions. Using soil moisture, rain, and light sensors, it ensures the water pump only turns on when needed—helping save water and improve plant care.

---

## ✨ Features

### 🌱 Intelligent Watering Logic
- Waters only when:
  - The **soil is dry**
  - **No rain** is detected
  - It’s **morning** and **not too sunny**

### 🚨 Multi-Condition Monitoring
- Integrates three sensors to determine optimal watering time:
  - Soil Moisture Sensor
  - Rainwater Sensor
  - Photoresistor (LDR)

### 💧 Automated Pump Control
- Controls a relay to turn on the water pump when all ideal conditions are met.

### 🔆 LED Status Indicators

| LED  | Condition                |
|------|--------------------------|
| LED1 | Soil is dry              |
| LED2 | No rain detected         |
| LED3 | It's still dark (early)  |
| LED4 | Pump is ON               |

---

## 🧰 Hardware Components

- Arduino Uno
- Soil Moisture Sensor
- Rain Water Sensor
- Photoresistor Module (LDR)
- Relay Module
- Water Pump
- 4x LEDs with resistors
- Jumper wires
- Breadboard

---

## ⚙️ How It Works

1. The system checks light level using the photoresistor.
2. If light level indicates morning, it reads the soil sensor.
3. If soil is dry, it checks for rainfall using the rain sensor.
4. If there is **no rain**, the **relay is triggered** and the pump turns on.
5. LEDs show live system status for each condition.

---

## 🧩 Future Enhancements

- 📡 IoT Monitoring via Wi-Fi (e.g., ESP8266)
- ☀️ Solar-powered version
- 📱 Companion app for remote control
- 🌦️ Weather API integration

---

## 🔌 Setup & Wiring

Make sure each sensor is connected to the correct analog/digital pins on your Arduino Uno, and use current-limiting resistors for LEDs.

> 💡 Note: Be cautious when using water pumps. Always isolate the high-voltage side of the relay module.

---

## 📜 License

This project is open-source under the MIT License.

---

## 🤝 Contributing

Contributions, improvements, and suggestions are welcome! Just open an issue or create a pull request.

