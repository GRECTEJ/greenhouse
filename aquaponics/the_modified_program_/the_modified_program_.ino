const int buttonPin = 2;
const int ledPin = 9;
int buttonState = 0;
 

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

 void loop()
 {
   buttonState = digitalRead(buttonPin);
   if (buttonState == LOW)
   {
     digitalWrite(ledPin, HIGH);//if button is not pushed it will go on in the prgram.//
   }
   else//if button is pushed it will wait the 2 hours and 55 minutes till it checks again to see if the button is pushed.//
   {
     digitalWrite(ledPin, LOW);//turn on the LED (pump).//
     delay(300000);// 1000 is one second. this number is set for 5 minutes (300000).// 
     digitalWrite(ledPin, HIGH); 
     delay(3300000);// this number is set for 2 hours and 55 minutes (3300000).//
   }
 } 
  
