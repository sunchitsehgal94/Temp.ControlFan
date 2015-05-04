float tempC;

int tempPin = 0;
int fan1=5;
int ledPin=13; 

void setup()
{
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(fan1,OUTPUT);


}

void loop()
{
tempC=analogRead(tempPin);
tempC= (5.0*tempC*100.0)/1024.0;
Serial.println((byte)tempC);
if (tempC>3
-0)
{
digitalWrite(ledPin,HIGH);
digitalWrite(fan1,HIGH);
}
else
{

digitalWrite(ledPin,LOW);
digitalWrite(fan1,LOW); 
}
delay(1000);
}
