# MindfulBreath – Interactive Box Breathing Visualizer

An open-source, Arduino-powered ambient light designed to guide users through the **Box Breathing** relaxation technique. Using dynamic color transitions and smooth PWM fading, this project transforms a simple RGB LED into an intuitive visual breathing coach.
---

## 🌟 Overview

Box breathing (also known as 4-4-4-4 breathing) is a powerful stress-relief technique used by athletes, military personnel, and practitioners of mindfulness to lower heart rates and improve focus. 

This project visualizes the four distinct stages of the breathing cycle using color-coded light cues and smooth brightness scaling:

1. **Inhale (4s):** Gradual Fade-In in **Green** (Energy & Fresh Air)
2. **Hold (4s):** Solid **Blue** (Calmness & Focus)
3. **Exhale (4s):** Gradual Fade-Out from **Red** (Release & Relaxation)
4. **Rest (4s):** Fully **Off** (Pause & Reset)

---

## 🛠️ Hardware Requirements

* **Microcontroller:** Arduino Uno (or Nano / Pro Mini)
* **Light Source:** Common Anode RGB LED
* **Resistors:** 3x 220Ω (for Red, Green, Blue channels)
* **Prototyping:** Breadboard & Jumper Wires
* **Power:** USB Type-B cable

---

## 🔌 Circuit & Wiring Schematic

Since a **Common Anode** RGB LED is used, the longest pin connects to `5V`, while the remaining color pins connect to PWM-enabled digital output pins through current-limiting resistors:

| RGB LED Pin | Connected Component | Arduino Pin |
| :--- | :--- | :--- |
| **Common Anode** | Longest Pin | `5V` |
| **Green Anode** | via 220Ω Resistor | `Pin 9` (PWM) |
| **Blue Anode** | via 220Ω Resistor | `Pin 10` (PWM) |
| **Red Anode** | via 220Ω Resistor | `Pin 11` (PWM) |

---

## 🚀 Getting Started

1. Wire your components on the breadboard according to the schematic above.
2. Clone this repository
