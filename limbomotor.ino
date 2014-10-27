int incoming = 0;
int motor    = 3;
int i=0;
int j=0;
void setup()
{
 Serial.begin(115200);
 delay(5000);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
 analogWrite(motor,0);
  delay(2000);
  TCCR2A = _BV(COM2A0) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(WGM22) | _BV(CS22)| _BV(CS21)| _BV(CS20);           //
  OCR2A = 156;
  OCR2B = 4;
}

void loop(){
  analogWrite(motor,0);
  delay(2000);
  for(;i<3;i++){
   analogWrite(motor,10);
   Serial.println("1");
   delay(5000);
   analogWrite(motor,12);
   Serial.println("2");
   delay(5000);
   analogWrite(motor,13);
   Serial.println("3");
   delay(5000);
    analogWrite(motor,12);
   Serial.println("4");
   delay(5000);
  }
  analogWrite(motor,0);
   Serial.println("stop");
   while(1);
  
  

 /* if (Serial.available() > 0) {
   incoming = Serial.read();
    switch (incoming) {
    case 1:
      analogWrite(motor,10);
      //do something when incoming equals 1
      break;
    case 2:
      analogWrite(motor,7);
      //do something when incoming equals 2
      break;
    default: 
      // if nothing else matches, do the default
       analogWrite(motor,5);
      // default is optional
  } 
 }
     
 digitalWrite(motor, HIGH);
  delay(2); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(motor, LOW);
  delay(18);
  */
   
}
