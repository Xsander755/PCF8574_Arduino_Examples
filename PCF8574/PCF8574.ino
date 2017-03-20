#include<Wire.h>

#define PCF8574A_ADDR 0x38
void setup() {
  // put your setup code here, to run once:
Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned char data;
for(data=0;data<256;data++)
  {
  Wire.beginTransmission(PCF8574A_ADDR);
  Wire.write(data);
  Wire.endTransmission();
  delay(100);
  }
}
