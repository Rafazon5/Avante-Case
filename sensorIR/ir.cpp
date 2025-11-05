int irPin = 9;    // pino de sinal do IR
int ledPin = 2;    // pino do LED

void setup() {
  pinMode(irPin, INPUT); //ir como entrada
  pinMode(ledPin, OUTPUT); //led como saida
  Serial.begin(9600);
}

void loop() {
  int valorIR = digitalRead(irPin);
  Serial.println(valorIR);
  
  if (valorIR == 0) { //ir é ao contrario, se tem aproximacao ele fica em 0
    digitalWrite(ledPin, 1);
  } else {
    digitalWrite(ledPin, 0);
  }
}
