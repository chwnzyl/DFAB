int button=12;
int blue=9;
int red=11;
int green=10;
int push;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT);
}

void loop(){
  push=digitalRead(button);
  if(push==HIGH){
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
  delay(1000);
  }
  else{
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  }
}
