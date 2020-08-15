#include <Arduino.h>

void apaga();
void mostra_numero(int n);

int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8;
int cont = 0;

int num[10][7] = {
    {a, b, c, d, e, f},    // zero
    {b, c},                // um
    {a, b, d, e, g},       // dois
    {a, b, c, d, g},       // tres
    {b, c, f, g},          // quatro
    {a, c, d, f, g},       // cinco
    {a, c, d, e, f, g},    // seis
    {a, b, c},             // sete
    {a, b, c, d, e, f, g}, // oito
    {a, b, c, d, f, g}     // nove
};

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  apaga();
  Serial.println(cont);
  mostra_numero(cont);
  delay(1000);
  cont++;
  if (cont == 10)
    cont = 0;
}

void apaga()
{

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void mostra_numero(int n)
{
  for (int i = 0; i < 7; i++)
  {
    digitalWrite(num[n][i], LOW);
  }
}