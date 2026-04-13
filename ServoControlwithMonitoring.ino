#include <Servo.h>

Servo myservo;
const int potPin = A0;   
const int servoPin = 9;  

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
  
  // Καλωσόρισμα στο Serial Monitor
  Serial.println("--- System Ready ---");
  Serial.println("Raw_Analog | Servo_Degrees | Status");
  Serial.println("------------------------------------");
}

void loop() {
  int rawValue = analogRead(potPin); // Διάβασμα ποτενσιόμετρου
  int degrees = map(rawValue, 0, 1023, 0, 180); // Μετατροπή σε μοίρες
  
  myservo.write(degrees); // Κίνηση Servo

  // Εμφάνιση των δεδομένων σε μία γραμμή για ευκολία
  Serial.print("Value: ");
  Serial.print(rawValue);      // Η τιμή από το A0
  Serial.print("  =>  ");
  Serial.print(degrees);       // Οι μοίρες
  Serial.print("°  |  Status: ");

  // Έλεγχος κατάστασης (Status)
  if (degrees > 5 && degrees < 175) {
    Serial.println("RUNNING");
  } else {
    Serial.println("EDGE REACHED"); // Όταν φτάνει στα όρια 0 ή 180
  }

  delay(100); // Μικρή καθυστέρηση για να προλαβαίνεις να διαβάζεις το monitor
}
