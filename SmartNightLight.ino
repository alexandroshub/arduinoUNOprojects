/*
 * Project: Smart Night-Light System
 * Description: Automatically toggles an LED based on ambient light levels 
 * measured by a photoresistor (LDR).
 * Author: [@alexandroshub]
 */

// --- Configuration Constants ---
const int threshold = 312;   // The point where the system considers it "dark"
const int sensorPin = A0;    // Analog pin connected to the photoresistor circuit
const int ledPin = 6;       // Digital pin connected to the LED

// --- Variables ---
int lightValue = 0;          // Variable to store the raw reading from the sensor

void setup() {
  // Initialize serial communication for real-time monitoring
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Print a startup message to the Serial Monitor
  Serial.println("System Online. Monitoring light levels...");
  Serial.print("Active Threshold: ");
  Serial.println(threshold);
  Serial.println("---------------------------------------");
}

void loop() {
  // Read the analog signal from the photoresistor (returns 0 to 1023)
  lightValue = analogRead(sensorPin);

  // Display the current sensor reading
  Serial.print("Sensor Value: ");
  Serial.print(lightValue);
  Serial.print(" | ");

  // Logic: If the sensor value is higher than the threshold, it is dark
  if (lightValue > threshold) {
    digitalWrite(ledPin, HIGH);      // Send 5V to the LED
    Serial.println("LED: [ON]");    // Log the LED status
  } 
  else {
    digitalWrite(ledPin, LOW);       // Send 0V to the LED
    Serial.println("LED: [OFF]");   // Log the LED status
  }

  // Small delay to prevent the Serial Monitor from scrolling too fast
  delay(250); 
}
