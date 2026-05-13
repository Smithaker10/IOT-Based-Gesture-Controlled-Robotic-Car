# 🚗 `README.md`

````md
# 🚗 IoT Based Gesture Controlled Car using ESP32

<div align="center">

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue?style=for-the-badge)
![MPU6050](https://img.shields.io/badge/MPU6050-Gesture%20Sensor-green?style=for-the-badge)
![ESP NOW](https://img.shields.io/badge/ESP--NOW-Wireless-orange?style=for-the-badge)
![Arduino](https://img.shields.io/badge/Arduino-C%2FC%2B%2B-red?style=for-the-badge)

### 🚀 Wireless Gesture Controlled Robotic Car using ESP32, MPU6050 & ESP-NOW

</div>

---

# 📌 Overview

This project is an IoT-based gesture controlled robotic car that uses hand gestures to control the movement of the vehicle wirelessly.

The system uses:
- 📡 ESP32 for wireless communication
- 🎮 MPU6050 for gesture detection
- ⚡ L298N motor driver for motor control
- 🚗 Robot chassis with DC motors

The communication between transmitter and receiver is done using ESP-NOW, which provides fast and low-latency wireless control without requiring internet or WiFi routers.

---

# 🎥 Project Demo

## 🚗 Car Movement

Add your demo GIF/video here:

```md
![Demo](images/demo.gif)
````

---

# 📷 Project Images

## 🎮 Transmitter Unit

MPU6050 + ESP32 gesture controller

```md
![Transmitter](images/transmitter.jpg)
```

---

## 🚗 Receiver Unit

ESP32 + L298N + Robot Chassis

```md
![Receiver](images/receiver.jpg)
```

---

## 🔌 Hardware Setup

```md
![Hardware](images/hardware.jpg)
```

---

# 🧠 Features

✅ Wireless gesture control
✅ Real-time communication using ESP-NOW
✅ No internet/router required
✅ Low latency response
✅ Portable transmitter system
✅ ESP32 based IoT project
✅ Easy to upgrade and customize

---

# 🛠 Hardware Components

| Component                | Quantity |
| ------------------------ | -------- |
| ESP32 Dev Board          | 2        |
| MPU6050 Gyroscope Sensor | 1        |
| L298N Motor Driver       | 1        |
| DC Motors                | 2        |
| Robot Chassis            | 1        |
| Wheels                   | 4        |
| Battery Pack             | 1        |
| Jumper Wires             | Multiple |

---

# ⚙️ System Architecture

```plaintext
Hand Gesture
     ↓
 MPU6050 Sensor
     ↓
 ESP32 Transmitter
     ↓  (ESP-NOW Wireless Communication)
 ESP32 Receiver
     ↓
 L298N Motor Driver
     ↓
 DC Motors
     ↓
 Robot Car Movement
```

---

# 🔌 Circuit Connections

# 🎮 Transmitter Connections

| MPU6050 | ESP32   |
| ------- | ------- |
| VCC     | 3.3V    |
| GND     | GND     |
| SDA     | GPIO 21 |
| SCL     | GPIO 22 |

---

# 🚗 Receiver Connections

| L298N | ESP32   |
| ----- | ------- |
| ENA   | GPIO 25 |
| IN1   | GPIO 26 |
| IN2   | GPIO 27 |
| IN3   | GPIO 12 |
| IN4   | GPIO 14 |
| ENB   | GPIO 13 |
| GND   | GND     |

---

# 🎮 Gesture Controls

| Gesture       | Action        |
| ------------- | ------------- |
| Tilt Forward  | Move Forward  |
| Tilt Backward | Move Backward |
| Tilt Left     | Turn Left     |
| Tilt Right    | Turn Right    |
| Flat Position | Stop          |

---

# 📡 Communication Protocol

This project uses ESP-NOW protocol for communication.

## Why ESP-NOW?

* ⚡ Ultra low latency
* 📶 No WiFi router needed
* 🔋 Low power consumption
* 🚀 Fast communication between ESP32 boards

---

# 💻 Software Used

* Arduino IDE
* ESP32 Board Package
* MPU6050 Library
* ESP-NOW Library

---

# 🚀 Installation & Setup

## 1️⃣ Clone Repository

```bash
git clone https://github.com/yourusername/iot-based-gesture-controlled-car.git
```

---

## 2️⃣ Open Arduino IDE

Install:

* ESP32 Board Package
* MPU6050 Library

---

## 3️⃣ Upload Receiver Code

Upload:

```plaintext
receiver/receiver.ino
```

---

## 4️⃣ Get Receiver MAC Address

Run MAC address code and copy the receiver MAC.

Example:

```plaintext
68:25:DD:32:AF:7B
```

---

## 5️⃣ Update Transmitter MAC

Update:

```cpp
uint8_t receiverMAC[] = {0x68, 0x25, 0xDD, 0x32, 0xAF, 0x7B};
```

---

## 6️⃣ Upload Transmitter Code

Upload:

```plaintext
transmitter/transmitter.ino
```

---

## 7️⃣ Power the System

* ESP32 via USB / Power Bank
* L298N using external battery (7V–12V recommended)

---

# 🧪 Serial Monitor Output

## 🎮 Transmitter

```plaintext
MPU6050 Ready ✅
Transmitter Ready 🚀
AX: 12000 | AY: 500
Send Status: SUCCESS ✅
```

---

## 🚗 Receiver

```plaintext
Starting Receiver...
Receiver Ready ✅
Command Received: 1
```

---

# ⚠️ Challenges Faced

* ESP-NOW pairing issues
* Motor driver enable pin configuration
* MPU6050 calibration
* Power supply instability
* Wireless communication debugging

---

# 🔥 Future Improvements

* PWM speed control
* AI-based gesture recognition
* Obstacle avoidance
* Mobile app control
* FPV camera integration
* Battery monitoring system

---

# 📂 Repository Structure

```plaintext
iot-based-gesture-controlled-car/
│
├── transmitter/
│   └── transmitter.ino
│
├── receiver/
│   └── receiver.ino
│
├── images/
│   ├── transmitter.jpg
│   ├── receiver.jpg
│   ├── hardware.jpg
│   └── demo.gif
│
├── docs/
│   └── project-report.pdf
│
└── README.md
```

---

# 👨‍💻 Authors

* Your Name
* Team Members

---

# 📜 License

This project is licensed under the MIT License.

---

# ⭐ Support

If you liked this project:

* 🌟 Star the repository
* 🍴 Fork the project
* 🚀 Share with others

---

<div align="center">

## 🚗 Built with ESP32 + MPU6050 + ESP-NOW 🔥

</div>
```
