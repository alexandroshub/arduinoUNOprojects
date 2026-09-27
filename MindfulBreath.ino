// Ορισμός των pins σύμφωνα με τη δική σου συνδεσμολογία:
const int GREEN_PIN = 9;
const int BLUE_PIN = 10;
const int RED_PIN = 11;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  // Αρχικό σβήσιμο όλων (255 = Σβηστό στην Κοινή Άνοδο)
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
}

void loop() {
  // 1. ΕΙΣΠΝΟΗ (Fade In σε ΠΡΑΣΙΝΟ) - Διάρκεια: ~4 δευτερόλεπτα
  analogWrite(RED_PIN, 255);  
  analogWrite(BLUE_PIN, 255); 
  for (int b = 0; b <= 255; b++) {
    analogWrite(GREEN_PIN, 255 - b); // Το Πράσινο ΑΝΑΒΕΙ σταδιακά
    delay(16); 
  }

  // 2. ΚΡΑΤΗΜΑ (Το Πράσινο ΣΒΗΝΕΙ απαλά και το Μπλε ΑΝΑΒΕΙ απαλά) - Διάρκεια: ~4 δευτερόλεπτα
  analogWrite(RED_PIN, 255); 
  for (int b = 0; b <= 255; b++) {
    analogWrite(GREEN_PIN, b);       // Το Πράσινο ΣΒΗΝΕΙ σταδιακά (πάει στο 255)
    analogWrite(BLUE_PIN, 255 - b);  // Το Μπλε ΑΝΑΒΕΙ σταδιακά (πάει στο 0)
    delay(16);
  }

  // 3. ΕΚΠΝΟΗ (Το Μπλε ΣΒΗΝΕΙ απαλά και το Κόκκινο ΑΝΑΒΕΙ απαλά) - Διάρκεια: ~4 δευτερόλεπτα
  analogWrite(GREEN_PIN, 255);
  for (int b = 0; b <= 255; b++) {
    analogWrite(BLUE_PIN, b);       // Το Μπλε ΣΒΗΝΕΙ σταδιακά
    analogWrite(RED_PIN, 255 - b);  // Το Κόκκινο ΑΝΑΒΕΙ σταδιακά
    delay(16);
  }

  // 4. ΚΡΑΤΗΜΑ ΜΕ ΑΔΕΙΑ ΠΝΕΥΜΟΝΙΑ (Το Κόκκινο ΣΒΗΝΕΙ απαλά) - Διάρκεια: ~4 δευτερόλεπτα
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  for (int b = 0; b <= 255; b++) {
    analogWrite(RED_PIN, b);        // Το Κόκκινο ΣΒΗΝΕΙ σταδιακά
    delay(16);
  }

  // Μικρή παύση 4 δευτερολέπτων με όλα σβηστά πριν ξεκινήσει ο επόμενος κύκλος
  analogWrite(RED_PIN, 255);   
  analogWrite(GREEN_PIN, 255); 
  analogWrite(BLUE_PIN, 255);  
  delay(4000);
}
