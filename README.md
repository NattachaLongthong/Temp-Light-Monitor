# Arduino Temperature & Light Logger

------------------------------------------------------

## 📖 Project Description
This is a simple Arduino project that measures temperature and light intensity using two analog sensors. The data is read every second and displayed on the Serial Monitor.

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)  
[View License](./LICENSE)

---------------------------------------------------

## 🔧 Hardware
* Arduino board (Uno, Nano, etc.)
* LM35 or TMP36 Temperature Sensor
* Light-Dependent Resistor (LDR)
* 10k Ohm Resistor
* Breadboard
* jumper wires

---------------------------------------------------

## 📐 Wiring
### Temperature Sensor (LM35/TMP36)
* **VCC** -> Arduino **5V**
* **GND** -> Arduino **GND**
* **Out** -> Arduino **A0**

### Light Sensor (LDR)
* One leg of **LDR** -> Arduino **5V**
* Other leg of **LDR** -> Arduino **A1**
* **10k Ohm Resistor** from **A1** -> Arduino **GND**
* 
---------------------------------------------------

## Code
```cpp

const int tempPin = A0;
const int lightPin = A1;

void setup() {
Serial.begin(9600);

}
void loop() {

int tempRaw = analogRead(tempPin);
float voltage = tempRaw * (5.0 / 1023.0);
float temperature = voltage * 100;

int lightRaw = analogRead(lightPin);
 
Serial.print("Temp: ");
Serial.print(temperature);
Serial.print(" °C\t");
Serial.print("Light: ");
Serial.println(lightRaw); 

delay(1000);
}
```
---------------------------------------------------
## 📸 Real Project Photo



## Software & Usage
Explain how to use your code with the Arduino IDE.

## 💻 Software & How to Use

1.  Connect the components as shown in the wiring diagram above.
2.  Open the **.ino** file in the Arduino IDE.
3.  Make sure you have the correct board and port selected under the **Tools** menu.
4.  Upload the sketch to your Arduino board.
5.  Open the Serial Monitor (Ctrl+Shift+M) to view the real-time temperature and light readings.
