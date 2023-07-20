int relayPin = 2; // Change this to the pin you used
// define the sensor pin
const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  // print out the value to the serial monitor
  Serial.println(sensorValue);

  // delay between reads
  delay(1000);
  digitalWrite(relayPin, HIGH); // turns on the relay and the pump
  delay(2000);
  digitalWrite(relayPin, LOW); // turns on the relay and the pump
}
