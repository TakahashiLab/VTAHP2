//50FPSで記録する用
#define freq 50
const int camerapin=10;
const int arduinopin=5;
const int arduinoprogrampin = 6;
const int button = 7;
const int arduinoLED =13;

void setup() {
  // put your setup code here, to run once:

  pinMode(camerapin,OUTPUT);
  pinMode(arduinopin,OUTPUT);
  pinMode(arduinoLED,OUTPUT);
  pinMode(button,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(button)==HIGH){
    digitalWrite(camerapin,HIGH);
    digitalWrite(arduinopin,HIGH);
    digitalWrite(arduinoLED,HIGH);
    digitalWrite(arduinoprogrampin,HIGH);
    //Serial.println("a1");
    delay(10);
    digitalWrite(camerapin,LOW);
    digitalWrite(arduinopin,LOW);
    digitalWrite(arduinoLED,HIGH);
    digitalWrite(arduinoprogrampin,HIGH);
    //Serial.println("a2");
    delay(10);
  }else{
    digitalWrite(camerapin,LOW);
    digitalWrite(arduinopin,LOW);
    digitalWrite(arduinoLED,LOW);
    digitalWrite(arduinoprogrampin,LOW);
    //Serial.println("b");
  }
}
