// =====================================================================
// Biblioteca Auxiliar

#include <dht.h>


// =====================================================================
// Mapeamento do Hardware

#define dht_pin 5     // Pino de sinal do dht11 ligado no digital 5

// =====================================================================
// Declaração de Objetos
dht my_dht;

// =====================================================================
// Variáveis Globais

float temperatura = 0x00;     // armazena a temperatura em float.
float umidade     = 0x00;     // armazena a umidade em float.

// =====================================================================
// Configurações iniciais

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, INPUT_PULLUP);

  Serial.begin(9600);     // serial em 9600 baud por segundo.
}


// =====================================================================
// Loop

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(10, LOW);

  // ===================================================================
  // Efetuando a leitura do sensor
  my_dht.read11(dht_pin);
  temperatura = my_dht.temperature;
  umidade     = my_dht.humidity;

  Serial.print(temperatura);
  Serial.print(" C");
  Serial.print(" \t");
  Serial.print(umidade);
  Serial.println("%");

  delay(1500);

  if (temperatura >= 29.00) {
    digitalWrite(10, HIGH);
    delay(1000);
    Serial.print("Tocando alarme...\n\n");
  } else {
    digitalWrite(10, LOW);
    delay(1000);
//    Serial.print("Alarme desligado...\n\n");
  }
}
