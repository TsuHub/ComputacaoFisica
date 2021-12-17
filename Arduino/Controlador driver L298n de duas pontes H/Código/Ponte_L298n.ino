
  // DRIVER ------------------------------------------------------------------------
  // Controle da velocidade de rotação
  const int PINO_ENA = 6;

  // Controle do sentido do motor através dos pinos
  const int PINO_IN1 = 4;
  const int PINO_IN2 = 3;

  // Variável para a rampa
  int i = 0;

  // Intervalo de 1 segundo entre o acionamento da vãlvula do bico
  const int TEMPO_ESPERA = 50;    // 8 ms

  const int TEMPO_RAMPA = 0;
  
  // DRIVER ------------------------------------------------------------------------

/*
 *              125Hz
 * 
 * 
 *        1000ms      1
 *        
 *           8ms     125       
 */

void setup()
{
  // DRIVER ------------------------------------------------------------------------
  pinMode(PINO_ENA, OUTPUT);
  pinMode(PINO_IN1, OUTPUT);
  pinMode(PINO_IN2, OUTPUT);

  digitalWrite(PINO_IN1, LOW); 
  digitalWrite(PINO_IN2, LOW);
  digitalWrite(PINO_ENA, LOW);
  // DRIVER ------------------------------------------------------------------------
}

void loop()
{
  // DRIVER ------------------------------------------------------------------------
  
  //configura os motores para o sentido horario
  digitalWrite(PINO_IN1, LOW); 
  digitalWrite(PINO_IN2, HIGH);

  //rampa de aceleracao
  for (i = 0; i < 256; i=i+10){ 
    analogWrite(PINO_ENA, i);
    delay(TEMPO_RAMPA); //intervalo para incrementar a variavel i
  }

  delay(TEMPO_ESPERA);

  //configura os motores para o sentido anti-horario
  digitalWrite(PINO_IN1, HIGH); 
  digitalWrite(PINO_IN2, LOW);

  //rampa de aceleracao
  for (i = 0; i < 256; i=i+10){ 
    analogWrite(PINO_ENA, i);
    delay(TEMPO_RAMPA); //intervalo para incrementar a variavel i
  }

  //rampa de desaceleracao
  for (i = 255; i >= 0; i=i-10){ 
    analogWrite(PINO_ENA, i);
    delay(TEMPO_RAMPA); //intervalo para incrementar a variavel i
  }

  delay(TEMPO_ESPERA); //intervalo de um segundo
  // DRIVER ------------------------------------------------------------------------
}
