void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  pinMode(7, INPUT_PULLUP);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  Serial.begin(9600);

  while (digitalRead(2) == 0) {
    delay(1000);
    stop();
  }
}

void loop() {

  if (!digitalRead(12) || !digitalRead(13)) {//verifica
    Serial.println("linha detectada");
    stop();
    delay(1);
    re();
    delay(300);
    stop();
    delay(1);
    girar();
    delay(600);
    stop();
  }

  frente();
  delay(1);
}
void re() {
  Serial.println("Re");
  analogWrite(5, 0);
  analogWrite(6, 200);
  analogWrite(9, 0);
  analogWrite(10, 200);
}
void frente() {
  Serial.println("Frente");
  analogWrite(5, 200);
  analogWrite(6, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void girar() {
  Serial.println("Girando");
  analogWrite(5, 0);
  analogWrite(6, 200);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void stop() {
  Serial.println("parado");
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);

}