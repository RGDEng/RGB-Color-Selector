
int redPin = 11;
int greenPin = 10;
int bluePin=9;

int potPin = A0;





void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(potPin, INPUT);


}

void loop() {
  int potRead;
  potRead= analogRead(potPin);

  potRead=map(potRead,0,1023,0,30);

  if(potRead<=10)
    digitalWrite(redPin, HIGH);

  else digitalWrite(redPin, LOW);

   if(potRead>10)
    digitalWrite(greenPin, HIGH);
    
  else digitalWrite(greenPin, LOW);

   if(potRead>20)
    digitalWrite(bluePin, HIGH);
   
  else digitalWrite(bluePin, LOW);

  
      


}
