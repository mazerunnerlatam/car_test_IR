/*
Remove ambient noise from sensor data.
IR LED  connected to Digital pin: 6
IR diode connected to analog input:A3
*/

// Analog as Digital
#define ir1 14
#define ir2 15
#define ir3 16
#define ir4 17
#define ir5 18

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
}

void loop() {
  int slm = analogRead(ir1);
  int sl = digitalRead(ir2); // Please Notice this is a DigitalREAD
  int sc = analogRead(A2);
  int sr = analogRead(A3);
  int srm = analogRead(A4);

  Serial.print(slm);
  Serial.print("\t");
  Serial.print(sl);
  Serial.print("\t");
  Serial.print(sc);
  Serial.print("\t");
  Serial.print(sr);
  Serial.print("\t");
  Serial.print(srm);
  Serial.println("\t => Notice 2nd Sensor has a DigitalREAD: 1 or 0");
  

  delay(500); 
}