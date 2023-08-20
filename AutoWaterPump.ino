// Set up your input and output pins
int moistureSensor = A0;
int relay = 2;
int sensorValue = 0;  

// Define the dryness threshold. You might need to adjust this value based on your specific sensor and soil conditions
int dryThreshold = 300;

void setup() {
  // Set up the relay pin as an output
  pinMode(relay, OUTPUT);
}

void loop() {
  // Read the value from the moisture sensor
  sensorValue = analogRead(moistureSensor);

  // Map the sensor value to a percentage (assuming 550 is 100% and 0 is 0%)
  int moisturePercent = map(sensorValue, 0, 550, 0, 100);

  // If the sensor value is below the dryness threshold, activate the pump
  if (sensorValue < dryThreshold) {
    digitalWrite(relay, HIGH);
  } 
  // If the sensor value is above the dryness threshold, deactivate the pump
  else {
    digitalWrite(relay, LOW);
  }

  // Wait for a bit before checking again
  delay(1000);
}
