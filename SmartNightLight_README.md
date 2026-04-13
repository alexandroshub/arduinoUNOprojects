<div align="center">

# 🌟 Smart Night-Light with Arduino
**A simple automation project that monitors ambient light levels and toggles an LED based on a customizable threshold.**

<br>

<img src="https://github.com/user-attachments/assets/9e7457bd-f41a-4bbf-bcac-8cde818a7f71" alt="Arduino Smart Night-Light Circuit" width="700">

<br>
<br>

---

</div>

## 📖 Explanation
Το project χρησιμοποιεί έναν **διαιρέτη τάσης (voltage divider)**. Η φωτοαντίσταση (LDR) αλλάζει την αντίστασή της ανάλογα με το φως, επιτρέποντας στο Arduino να αντιληφθεί τις μεταβολές του περιβάλλοντος.

### ⚙️ Πώς λειτουργεί:
* **Στο φως:** Η αντίσταση της LDR πέφτει, η τάση αλλάζει και η τιμή στο `analogRead` είναι χαμηλή.
* **Στο σκοτάδι:** Η αντίσταση ανεβαίνει και η τιμή ξεπερνά το όριο (**threshold**) που θέσαμε (π.χ. **312**), ενεργοποιώντας αυτόματα το LED.

---

## 🛠 Hardware Components

| Component | Quantity | Description |
| :--- | :---: | :--- |
| **Arduino Uno** | 1 | Ο εγκέφαλος του project |
| **Photoresistor (LDR)** | 1 | Αισθητήρας φωτός |
| **10kΩ Resistor** | 1 | Για τον διαιρέτη τάσης |
| **LED & 220Ω Resistor** | 1 | Ένδειξη φωτισμού & προστασία |
| **Breadboard & Jumpers** | - | Για τις συνδέσεις |

---

## 🚀 Features
- [x] **Real-time Monitoring:** Συνεχής έλεγχος των επιπέδων φωτός.
- [x] **Serial Monitoring:** Παρακολούθηση των τιμών μέσω της σειριακής θύρας.
- [x] **Custom Threshold:** Εύκολη προσαρμογή της ευαισθησίας μέσω του κώδικα.
