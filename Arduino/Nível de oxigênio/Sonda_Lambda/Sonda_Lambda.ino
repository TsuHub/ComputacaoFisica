void setup()
{
  // iniciando a comunicação serial para os valores serem exibidos no monitor serial.
  Serial.begin(9600);
}

void loop()
{
  //float tensao0 = analogRead(A0);
  float tensao1 = analogRead(A1);  // Leitura do valor da porta A0
  //tensao0 = tensao0*5/1023;         // Conversão da leitura para tensão
  tensao1 = tensao1*5/1023;

  //Serial.print(" \t");
  //Serial.print(tensao0);
  Serial.print(tensao1);
  Serial.print("V");
  delay(1000);
  Serial.print("\t");

  Serial.print("\n");

  if (tensao1 >= 0.0 && tensao1 <= 0.5) {
    Serial.print("Mistura pobre");
  }
  else {
    Serial.print("Mistura rica");
  }
  Serial.print("\n");
}
