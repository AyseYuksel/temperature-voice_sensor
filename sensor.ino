
int voice=6;
int temperature=A0;
int ledpin=5;
int voice_value=0;
int temp_value=0;

void setup() {
pinMode(voice,INPUT);
pinMode(ledpin,OUTPUT);
}

void loop() {
temp_value=analogRead(temperature);
voice_value=digitalRead(voice);
if(voice_value==1 || temp_value>=37){
  digitalWrite(ledpin,HIGH);
}else{
    digitalWrite(ledpin,LOW);
    }
}
