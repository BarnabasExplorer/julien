int lightDelay = 35;


void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(11,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  
  


  
  digitalWrite(12,HIGH);
  delay(lightDelay);
  digitalWrite(12,LOW);
  delay(lightDelay);
  
  digitalWrite(10,HIGH);
  delay(lightDelay);
  digitalWrite(10,LOW);
  delay(lightDelay);
  

  digitalWrite(8,HIGH);
  delay(lightDelay);
  digitalWrite(8,LOW);
  delay(lightDelay);
  

  digitalWrite(9,HIGH);
  delay(lightDelay);
  digitalWrite(9,LOW);
  delay(lightDelay)
  
  ;
}
