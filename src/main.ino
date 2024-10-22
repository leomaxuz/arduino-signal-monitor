// Analog Signal Analysis with Arduino

const int analogPin = A0; // Analog pin to read from
int signalValue = 0;       // Variable to store the signal value

void setup() {
    Serial.begin(9600); // Start serial communication
}

void loop() {
    // Read the analog value
    signalValue = analogRead(analogPin);

    // Print the signal value to the Serial Monitor
    Serial.print("Analog Signal Value: ");
    Serial.println(signalValue);

    // Wait for a short period before the next reading
    delay(500);
}
