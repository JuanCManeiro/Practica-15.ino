# Practica-15.ino
Practica rego con tres variables
// C++ code
//
int A = 0;

int B = 0;

int C = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if (((!(A == 1)) && B == 1) && (!(C == 1))) {
    digitalWrite(12, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    Serial.print(" rego 1");
  } else {
    if ((A == 1 && B == 1) && (!(C == 1))) {
      digitalWrite(12, HIGH);
      delay(2000); // Wait for 2000 millisecond(s)
      Serial.print(" rego 2");
    } else {
      if ((A == 1 && B == 1) && C == 1) {
        digitalWrite(12, HIGH);
        delay(2000); // Wait for 2000 millisecond(s)
        Serial.print(" rego 3");
      } else {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        Serial.println("non fai falla regar");/*cando deixo de pulsar o led do pin 12 segue 
        aceso ainda que as mensaxes de monitor aparecen correctamente*/
      }
    }
  }
}
/*a continuacion poño con modo alta sen usar 1*/
// C++ code
//
int A = 0;

int B = 0;

int C = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if (((!(A == HIGH)) && B == HIGH) && (!(C == HIGH))) {
    digitalWrite(12, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    Serial.print(" rego 1");
  } else {
    if ((A == HIGH && B == HIGH) && (!(C == HIGH))) {
      digitalWrite(12, HIGH);
      delay(2000); // Wait for 2000 millisecond(s)
      Serial.print(" rego 2");
    } else {
      if ((A == HIGH && B == HIGH) && C == HIGH) {
        digitalWrite(12, HIGH);
        delay(2000); // Wait for 2000 millisecond(s)
        Serial.print(" rego 3");
      } else {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        Serial.println("non fai falla regar");
      }
    }
  }
}
/* neste caso tampouco apaga o led dependente do pin 12 cando non hai que regar
desconecta o rego pero o led segue aceso, cousa que non sucede se non pulso nada 
e deixo a simulacion correr na etapa de non fai falla regar*/
