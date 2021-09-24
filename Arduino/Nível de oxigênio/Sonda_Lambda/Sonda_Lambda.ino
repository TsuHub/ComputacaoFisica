void setup()
{
  // iniciando a comunicação serial para os valores serem exibidos no monitor serial.
  Serial.begin(9600);
}

void loop()
{
  float tensao = analogRead(A0);  // Leitura do valor da porta A0
  tensao = tensao*5/1023;         // Conversão da leitura para tensão

  //Serial.print(" \t");
  Serial.print(tensao);
  Serial.print("V");
  delay(1000);
  Serial.print("\t");

  if (tensao >= 0.0 && tensao <= 0.5) {
    Serial.print("Mistura pobre");
  }
  else {
    Serial.print("Mistura rica");
  }
  Serial.print("/n");
}
