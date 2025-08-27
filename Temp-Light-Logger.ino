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