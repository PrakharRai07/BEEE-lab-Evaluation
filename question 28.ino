void setup()
{
     Serial.begin(9600);
     pinMode(6,OUTPUT);
     pinMode(5,OUTPUT);
     pinMode(2,INPUT);  
     pinMode(3,INPUT);
}
void loop()
{
     int g,r;
     r=digitalRead(3);
     if(r==1)
    { digitalWrite(5,HIGH);
     delay(40);}
     else
 {   
  digitalWrite(5,LOW);
 }
 g=digitalRead(2);
      if(g==1)
      {
        digitalWrite(6,HIGH);
        delay(20);
       }
       else
       digitalWrite(6,LOW);
}