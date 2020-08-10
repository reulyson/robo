int s1l = 2; //pino de entrada para o sensor 1 de linha;
int s2l = 3; //pino de entrada para o sensor 2 de linha;
int s1p = A0; //pino de entrada para o sensor 1 de presença;
int s2p = A1; //pino de entrada para o sensor 2 de presença;
int m1a = 11; //saída para ponte H1 (sentido para frente)
int m1b = 10; //saída para ponte H1 (sentido para trás)
int m2a = 9; //saída para ponte H2 (sentido para frente)
int m2b = 8; //saída para ponte H2 (sentido para trás)
int button = 7; // pino para o botão de start
buttonState = 0;
infs1 = 0;
infs2 = 0;
infs3 = 0;
infs4 = 0;

void setup() {
  pinMode(s1l, INPUT);
  pinMode(s2l, INPUT);
  pinMode(s1p, INPUT);
  pinMode(s2p, INPUT);
  pinMode(m1a, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2b, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}
void loop(){
  buttonState = digitalRead(button);
  
  if (buttonState==HIGH); //apos ligado espera 1 segundo para iniciar
  {
    delay(1000)
    digitalWrite(s1l, HIGH);
    digitalWrite(s2l, HIGH);
    digitalWrite(s1p, HIGH);
    digitalWrite(s2p, HIGH);
  }
}

void loop(){
  infs1 = digitalRead(s1l);
  infs2 = digitalRead(s2l);
  infs3 = digitalRead(s1p);
  infs4 = digitalRead(s2p);
  
  if (infs1 == infs2 == infs3 == infs4 == HIGH); //Estado normal do robô (ir para frente)
  {
    digitalWrite(m1a, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2b, LOW);
  
  }
  if (infs3 == infs4 == infs1 == HIGH && infs2 == LOW); //Caso o sensor detectar a linha recuar
  {
    //para os motores
    digitalWrite(m1a,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2b,LOW);
    delay(500);
    //recuar
    digitalWrite(m1a, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2b, HIGH);
  }
  if (infs3 == infs4 == infs2 == HIGH && infs1 == LOW); //Caso o sensor detectar a linha recuar
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2b,LOW);
    delay(500);
    //recuar
    digitalWrite(m1a, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2b, HIGH);
  }
}