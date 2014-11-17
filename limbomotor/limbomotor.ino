int incoming = 0;
	int i=0;
	int j=0;
	int motor= 3;
	int servo = 4;
	void setup()
	{
		 Serial.begin(115200);
		 delay(5000);
	 	 pinMode(3, OUTPUT);
  		 pinMode(11, OUTPUT);
 		 analogWrite(motor,0);
 		 delay(2000);
  		TCCR2A = _BV(COM2A0) | _BV(COM2B1) | _BV(WGM20);
  		TCCR2B = _BV(WGM22) | _BV(CS22)| _BV(CS21)| _BV(CS20);         
 	 	OCR2A = 156;
  		OCR2B = 4;
	}
void loop()
	{
		if (Serial.available() > 0) {
   		incoming = Serial.read() - ‘0';
   			 switch (incoming) {
    			case 1:
     				analogWrite(motor,10);   //do something when incoming equals 1
				Serial.println("go");
    				break;
   		 	case 2:
     				analogWrite(motor,7);    //do something when incoming equals 2
				Serial.println("back");
    				break;

			case 3:
     				analogWrite(servo,10);   //do something when incoming equals 3
    				Serial.println("left");
    				break;
			case 4:
     				analogWrite(servo,10);   //do something when incoming equals 4
    				Serial.println("right");
    				break;

     			 break;
    				default: 
     		    		analogWrite(motor,5);
				Serial.println("error");
			  } 
 }

