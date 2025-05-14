// Sensor pins
const int soilPin = A0;
const int rainPin = A1;
const int ldrPin = A2;

// Output pins
const int relayPin = 8;
const int ledSoilDry = 2;
const int ledNoRain = 3;
const int ledDark = 10;
const int ledPump = 5;

// Threshold values (adjust based on calibration)
const int soilDryThreshold = 500;     // Above this = dry
const int rainDetectedThreshold = 400; // Below this = raining
const int morningLightMin = 200;      // Above this = some light

void setup() {
  // Initialize outputs
  pinMode(relayPin, OUTPUT);
  pinMode(ledSoilDry, OUTPUT);
  pinMode(ledNoRain, OUTPUT);
  pinMode(ledDark, OUTPUT);
  pinMode(ledPump, OUTPUT);

  digitalWrite(relayPin, HIGH); // OFF initially (relay active LOW)

  Serial.begin(9600);
}

void loop() {
  // Read sensors
  int soilValue = analogRead(soilPin);
  int rainValue = analogRead(rainPin);
  int lightValue = analogRead(ldrPin);

  Serial.print("Soil: "); Serial.print(soilValue);
  Serial.print(" | Rain: "); Serial.print(rainValue);
  Serial.print(" | Light: "); Serial.println(lightValue);

  // Determine conditions
  bool isSoilDry = soilValue > soilDryThreshold;
  bool isRaining = rainValue < rainDetectedThreshold;
  bool isMorning = lightValue < morningLightMin;

  // Pump should be ON when soil is dry **AND** there is no rain
  bool pumpCondition = isSoilDry && !isRaining && isMorning;

  // LED indicators
  digitalWrite(ledSoilDry, isSoilDry ? HIGH : LOW);
  digitalWrite(ledNoRain, !isRaining ? HIGH : LOW);
digitalWrite(ledDark, isMorning ? HIGH : LOW);

  // Relay and pump LED
  digitalWrite(relayPin, pumpCondition ? HIGH : LOW); // ON if dry & no rain
  digitalWrite(ledPump, pumpCondition ? HIGH : LOW);  // LED indicates pump state

  delay(500); // 2-second delay
}
