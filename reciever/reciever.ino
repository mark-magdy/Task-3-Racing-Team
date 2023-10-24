void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}
int val ,pot ; 
void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == '1')
    {
      digitalWrite(12, HIGH);
    }
    else {
      digitalWrite(12, LOW);
    }
  }

  pot=analogRead(A0);
  val = map(pot,0,1023,0,180) ; 
  Serial.print(val) ; 
}