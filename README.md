# arduinoUNOprojects
https://robodayblog.wordpress.com/2016/05/22/arduino/



Title: Smart Night-Light with Arduino
A simple automation project that monitors ambient light levels and toggles an LED based on a customizable threshold.
feat: add serial monitoring and custom threshold for better accuracy
📖 Explanation 
Το project χρησιμοποιεί έναν διαιρέτη τάσης (voltage divider). Η φωτοαντίσταση (LDR) αλλάζει την αντίστασή της ανάλογα με το φως. Το Arduino διαβάζει αυτή την αλλαγή ως τάση στην αναλογική είσοδο A0.
Στο φως: Η αντίσταση της LDR πέφτει, η τάση αλλάζει και η τιμή στο analogRead είναι χαμηλή.
Στο σκοτάδι: Η αντίσταση ανεβαίνει, και η τιμή ξεπερνά το όριο (threshold) που θέσαμε (π.χ. 312), ενεργοποιώντας το LED.
🛠 Hardware Components
Arduino Uno
Photoresistor (LDR)
10kΩ Resistor (για τον διαιρέτη τάσης)
LED & 220Ω Resistor (για προστασία του LED)
Breadboard & Jumpers
