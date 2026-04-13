<div align="center">

# 🤖 Arduino Servo Control with Real-Time Monitoring
**Ένα project ακριβείας για τον έλεγχο σερβομηχανισμού μέσω ποτενσιόμετρου, με πλήρη παρακολούθηση της κατάστασης (Status) μέσω Serial Monitor.**

<br>

<img src="https://github.com/user-attachments/assets/18419588-062f-4632-86e4-5d322caa90e7" alt="Arduino Servo Circuit" width="750" style="border-radius: 10px;">

<br>
<br>

---

</div>

## 📖 Περιγραφή
Αυτό το project επιτρέπει τον έλεγχο ενός **Servo Motor** (0-180°) χρησιμοποιώντας ένα **ποτενσιόμετρο**. Ο κώδικας μετατρέπει την αναλογική είσοδο σε μοίρες και παρέχει ζωντανή ενημέρωση για την κατάσταση της κίνησης.

### ✨ Βασικές Λειτουργίες
* **Analog Mapping:** Μετατροπή της τιμής $0-1023$ σε γωνία $0-180^{\circ}$.
* **Status Monitoring:** Εμφάνιση της κατάστασης (`RUNNING` ή `EDGE REACHED`) στο Serial Monitor.
* **Jitter Control:** Σταθεροποίηση της κίνησης μέσω καθυστέρησης (delay) για ομαλότερη απόκριση.

---

## 🛠 Hardware Components

| Εξάρτημα | Ποσότητα | Σύνδεση στο Arduino |
| :--- | :---: | :--- |
| **Arduino Uno** | 1 | Board |
| **Servo Motor (SG90)** | 1 | Pin 9 (PWM) |
| **Potentiometer (10kΩ)** | 1 | Analog Pin A0 |
| **Breadboard & Jumpers** | - | - |

---

## 💻 Ο Κώδικας (Main Sketch)

```cpp
#include <Servo.h>

Servo myservo;
const int potPin = A0;   
const int servoPin = 9;  

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
  
  Serial.println("--- System Ready ---");
  Serial.println("Raw_Analog | Servo_Degrees | Status");
  Serial.println("------------------------------------");
}

void loop() {
  int rawValue = analogRead(potPin); 
  int degrees = map(rawValue, 0, 1023, 0, 180); 
  
  myservo.write(degrees); 

  // Live Status Output
  Serial.print("Value: ");
  Serial.print(rawValue);      
  Serial.print("  =>  ");
  Serial.print(degrees);       
  Serial.print("°  |  Status: ");

  if (degrees > 5 && degrees < 175) {
    Serial.println("RUNNING");
  } else {
    Serial.println("EDGE REACHED"); 
  }

  delay(100); 
}
