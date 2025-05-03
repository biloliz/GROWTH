#Project G.R.O.W.T.H.
#Green-Responsive Operation for Watering Through Horticulture

G.R.O.W.T.H. is a smart, sensor-driven irrigation system that promotes sustainable plant care by ensuring water is only used when necessary—when the soil is dry, no rainfall is detected, and sunlight is optimal.

✨ Features
🌱 Intelligent Watering Logic
Combines readings from a soil moisture sensor, rain detector, and photoresistor to decide whether the water pump should activate, minimizing waste and maximizing plant health.

🚨 Multi-Condition Monitoring
The system verifies three key conditions before watering:

Soil is dry

No rain is detected

It is morning and not too bright

💧 Automated Pump Control
A relay activates the water pump only when the ideal conditions are met. This avoids overwatering, conserves water, and protects plant roots.

🔆 LED Indicator System
LED	Status Condition
LED1	Soil is dry
LED2	No rain detected
LED3	Light is low (dark)
LED4	Pump is ON

Each LED helps visualize real-time sensor states, useful for both monitoring and troubleshooting.

⚙️ Hardware Used
Arduino Uno

Soil Moisture Sensor

Rain Water Sensor

Photoresistor (LDR)

Relay Module

Water Pump

4x LEDs with resistors

Jumper wires and breadboard

🚀 How It Works
Morning check using the photoresistor.

Soil moisture is read to determine if watering is needed.

Rain sensor ensures no active rainfall.

If all conditions pass, the relay turns ON, activating the water pump.

LEDs display which conditions are met and whether the pump is running.

💡 Future Add-ons
🌐 IoT Upgrade: Add Wi-Fi for remote control and soil condition monitoring.

☀️ Solar Power: Make the system completely green with solar panels.

📱 Mobile App: View sensor data and control pump remotely.

