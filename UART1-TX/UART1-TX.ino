void setup() {
  Serial1.begin(9600,SERIAL_8O2);   
}

void loop() {
  char incomingByte;
 test_write();
 if (Serial.available() > 0) {
  // read the incoming byte:
  incomingByte = Serial.read();
  Serial.print(incomingByte);
        }
}

void test_write() {
    Serial1.write("Cam Fisica");
    delay(1);
}

void test_receive() {
}
