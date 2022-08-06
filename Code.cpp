#define trigPin 12 
#define echoPin 10 
#define vib 7 
#define buz 5 
void setup() 
{ 
 pinMode(trigPin, OUTPUT); 
 pinMode(echoPin, INPUT); 
 pinMode(vib, OUTPUT); 
 pinMode(buz, OUTPUT); 
} 
void loop() 
{  
long duration, distance; 
digitalWrite(trigPin, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW); 
 
duration = pulseIn(echoPin, HIGH); 
distance = duration*0.01723; 
 
if (distance <= 100) 
{ 
digitalWrite(vib,HIGH); 
digitalWrite(buz,HIGH); 
} 
  else 
{ 
digitalWrite(vib,LOW); 
digitalWrite(buz,LOW); 
} 
  delay(100); 
} 
