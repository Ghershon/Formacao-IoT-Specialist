// C++ code
//
int temperatura = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  Serial.println(temperatura);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  if (temperatura >= 30) {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    Serial.println("Ventoinha Ligada !");
    delay(2000); // Wait for 3000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    Serial.println("Buzina Desligada !");
    delay(2000); // Wait for 1000 millisecond(s)
    }
  if (temperatura >= 50) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    Serial.println("Buzina Ligada !");
    delay(2000); // Wait for 4000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    Serial.println("Buzina Desligada !");
    delay(2000); // Wait for 2000 millisecond(s)
      }
}