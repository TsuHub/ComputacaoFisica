## Semana do dia 19 de setembro
<br/>
Para a compreensão do funcionamento da Sonda Lambda foram estudados os seguintes materiais:
http://www.ngkntk.com.br/manual/pdf/sonda.pdf<br/>
https://www.youtube.com/watch?v=_CcmKM-pT1Q<br/>
https://www.youtube.com/watch?v=EHcgp7xy3xU&t=394s<br/>

===========================================================================================

<br/>
<br/>
Aquisição da Sonda Lambda MTE-THOMPSON - 7810.12.040 - 311<br/>
Funcionamento: 5V/300ºC<br/>
<br/>

===========================================================================================

<br/>
Um motor efetua a combustão da mistura do oxigênio com o combustível para seu funcionamento.<br/>
Caso a mistura possua mais oxigênio do que combustível, é dito que a mistura é pobre, e caso<br/>
contrário, é dito que a mistura é rica. E para a regular a quantidade de combustível para queima,<br/>
os motores com injeção eletrônica possuem um módulo conectado a dois componentes:<br/>
- Bico injetor;<br/>
- Sonda lambda;<br/>
<br/>
O bico injetor é a peça responsável por injetar combustível à mistura.<br/>
A sonda lambda é um sensor que mede a quantidade de oxigênio disponível no ar,<br/>
indicando ao módulo da injeção se a mistura é pobre ou rica.<br/>
O sensor é acoplado no coletor do escapamento para analisar a quantidade de O2 no ar.<br/>
Para a sonda lambda de 1 fio, caso a leitura indique uma tensão próxima de 1.0V,<br/>
é dado que a mistura é rica e para indicações próximas de 0.0V, a mistura é pobre.<br/>
<br/>
Em suma:<br/>
- Mistura rica  = pouco O2 e mais combustível  | 1.0V<br/>
- Mistura pobre = muito O2 e menos combustível | 0.0V<br/>

===========================================================================================

<br/>
Dado o funcionamento da sonda lambda, foi utilizado um Arduino UNO<br/>
para realizar a leitura. Um fio foi conectado na porta analógica 0 do Arduino, e na outra ponta<br/>
a conexão com a sonda (na parte metálica). O monitoramento da voltagem é feito pelo código no link:<br/>
https://github.com/TsuHub/ComputacaoFisica/blob/main/Arduino/Nível%20de%20oxigênio/Sonda_Lambda/Sonda_Lambda.ino<br/>
<br/>
A saída é dada no Monitor serial.<br/>
<br/>
Materiais de consulta:<br/>
https://forum.arduino.cc/t/reading-an-oxygen-sensor/247652<br/>
https://mundoprojetado.com.br/lendo-valor-analogico-c-o-arduino/<br/>
https://mundoprojetado.com.br/voltimetro-amperimetro-e-ohmimetro-c-arduino/<br/>

===========================================================================================
## Semana do dia 19 de outubro
<br/>
Montagem do prototipo para teste da sonda, com utilização de um maçarico à gás.
<br/>
Aquicição do bico de injeção<br/>
<br/>
Realização do teste de voltagem com adição de calor com o maçarico. Ao realizar o teste notamos uma flutuação de tensão na sonda de 3.0V a 3.8V. Uma vez que precisavamos da tensão entre 0 e 1, resolvemos o problema aterrando ela. Durante os testes o aterramento foi realizado no proprio alicate. <br/>
[testeSendoRealizado](./PrototipoSonda/realizandoTeste.jpg)
<br/>
Resultado dos testes:<br/>
[testeResultado](PrototipoSonda/resultadosTeste.png)
<br/>
Desmontamos a serra eletrica, para localizar um ponto de facil inserção da sonda. Tiramos as medidas da sonda para furar o ponto de entrada.<br/>
<br/>

### Proximos Passos:

Realizar o furo do ponto de entrada na carcaça da serra eletrica.<br/>
Descobrir como fazer com que o bico de injeção funcione.<br/>
Instalar a sonda no escapamento.<br/>
Instalar o bico de injeção.<br/>
Instalar o circuito.<br/>
Montagem do prototipo para teste da sonda, com utilização de um maçarico à gás.<br/>

===========================================================================================
## Semana do dia 24 de outubro
### Próximos passos (I)
Tiradas as medidas das peças, uma lista dos próximos passos (I) foi criada:<br/>
1. Precisamos de uma porca que caiba na sonda (possivelmente encontrado em materiais de construções);<br/>
2. Precisamos fazer uma solda no coletor (estamos procurando alguém para isso);<br/>
3. A fonte 12v - 2,5A (já foi adquirido);<br/>
4. Um relê para fazer controle da injeção do combustível ligado em uma porta digital do arduino;<br/>
5. Tanque para o combustível (estamos pensando em utilizar uma garrafa pet 2L);<br/>
6. Bomba de combustível para o bico;<br/>
7. Por fim, o grupo irá se encontrar para montar tudo;<br/>

### Questões levantadas
Precisamos verificar as especificações do relê;<br/>
Verificar a amperagem para o funcionamento da bomba;<br/>

#### Links das peças
Fonte 12v:<br/>
https://produto.mercadolivre.com.br/MLB-855039747-fonte-12v-1a-bivolt-100v-240v-dc-plug-p4-arduino-_JM?matt_tool=56291529&matt_word=&matt_source=google&matt_campaign_id=14303413604&matt_ad_group_id=125984287397&matt_match_type=&matt_network=g&matt_device=c&matt_creative=539354956227&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=213006982&matt_product_id=MLB855039747&matt_product_partition_id=1402345268347&matt_target_id=pla-1402345268347&gclid=Cj0KCQjwt-6LBhDlARIsAIPRQcJC9-URQ-hoWfXkxsMUCPL0eDvpCP2cBcWiFD09ruORtuoXJmOG5_8aAv3gEALw_wcB

<br/>
Bomba de combustível Palio Fire Evo E-torq Flex Mm145:<br/>
https://produto.mercadolivre.com.br/MLB-976686984-bomba-de-combustivel-palio-fire-evo-e-torq-flex-mm145-_JM?matt_tool=30498494&matt_word=&matt_source=google&matt_campaign_id=14303357453&matt_ad_group_id=128472474360&matt_match_type=&matt_network=g&matt_device=c&matt_creative=539354515806&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=120779647&matt_product_id=MLB976686984&matt_product_partition_id=1405367288383&matt_target_id=pla-1405367288383&gclid=Cj0KCQjwt-6LBhDlARIsAIPRQcJE0poeY1IFWQB5M2S93VsWHumscEbivuQXME_nCZBjYd13hBTqK3saAvn3EALw_wcB


### Próximos passos (II):
- Marcação do tempo que a polia do motor completa um ciclo (cilindro de 2 tempos).
- Após a marcação, programar o Arduino fazer o controle da válvula do bico injetor, com a frequência condizente com o tempo marcado do ciclo completo do cilindro.
- A injeção do combustível deve ocorrer no movimento de subida do pistão.

### Plano para a marcação de um ciclo:
- Acoplar um imã na polia (ou corrente do motor da serra)<br/>
- Adquirir um sensor magnético:<br/>
https://produto.mercadolivre.com.br/MLB-1022586325-sensor-magnetico-de-abertura-de-embutir-branco-_JM?matt_tool=56291529&matt_word=&matt_source=google&matt_campaign_id=14303413604&matt_ad_group_id=125984287157&matt_match_type=&matt_network=g&matt_device=c&matt_creative=539354956218&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=117393665&matt_product_id=MLB1022586325&matt_product_partition_id=1404886571258&matt_target_id=pla-1404886571258&gclid=Cj0KCQjwt-6LBhDlARIsAIPRQcLXrdXmHFkQWvxThCT8aOcZUTvr7ws8Gl91TCga-obrXhDcFcxN24kaAmbWEALw_wcB
<br/>
Cabo com 20cm de cabo;<br/>
Potência máxima de operação de 10W;<br/>
Funcionamento com até 5cm de distância;<br/>

### Funcionamento do sensor
Ao se aproximar um imã ao sensor (de contato aberto), um pino interno fecha o circuito permitindo a passagem de corrente.

### Plano para sincronização da válvula com o cilindro
#### Abordagem 1
Ao detectarmos corrente, faremos a leitura e mandaremos o Arduino acionar a válvula do bico injetor.
<br/>
#### Abordagem 2

Uma outra abordagem é utilizar o driver de motor L298 de duas pontes H.
Este driver consegue trabalhar com a frequência do motor de 7500rpm

##### Material de estudo
Compreendendo o funcionamento do driver de Motor L298 com duas pontes H para saber como fazer o controle da válvula do bico injetor.<br/>
https://www.robocore.net/tutoriais/motor-dc-arduino-ponte-h-l298n
<br/>
![alt text](https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/243/h-bridge-driver-for-two-phase-bipolar-stepper-motor.gif)
![alt text](https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/243/LED%20PWM.gif)
<br/>
<br/>
##### Modelo base de estudo do funcionamento do driver com o Arduino
![alt text](https://www.robocore.net/upload/tutoriais/243_img_2_H.png?167)

===========================================================================================
## Semana do dia 12 de Novembro
O sensor magnetico chegou na terça

Não encontramos ninguem para fazer a solda, estamos considerando fazer nós mesmos, logo estamos atrás de inversor e eletrodo. Estamos considerando os modelos TIG e MIG, que são os melhores mas por outro lado dá mais trabalho




==========================================================================================

### ESPECIFICAÇÕES DO SENSOR:

Características principais
Marca    EXTARTE IMP
Modelo    SENSOR DE EMBUTIR
Outras características
Voltagem de alimentação: 0V
Corrente de saída: 0 A
Tipo de saída: SENSOR
Distância de detecção: 50 mm
Materiais detectáveis: ALARME,PROTÃO,CERCA,AUTOMAÇÕES,USO GERAL


Descrição

O Sensor Magnético de Embutir é composto por duas partes, o sensor e o imã, conforme foto acima.

TIPO DE CONTATO

Contato do tipo N.A. (Normalmente Aberto)

Ao se aproximar do imã, o sensor magnético será acionado e seu contato fechará, permitindo a passagem de corrente elétrica.

### CARACTERÍSTICAS TÉCNICAS:

O encapsulamento do sensor e do imã são do mesmo tamanho para este modelo de sensor.
Comprimento do cabo: 20 cm.
Diâmetro do tubo: Verifique a foto
Potência máxima de operação: 10W (VA).
Corrente máxima de chaveamento: 1A
Resistência de contato (inicial): 100m Ohms

IMPORTANTE: A aplicação de carga elétrica superior à carga limite do sensor acarretará em queima do mesmo, 'colando' o contato do sensor. Em diversas aplicações, o circuito possui um pico de energia no momento do acionamento, sendo necessário prever essa situação para não causar dano ao sensor.

===========================================================================================
## Semanas dos dias 19 e 26 de Novembro
A montagem da sonda no coletor de escape foi simples, mas trabalhosa. Compramos uma porca própria para montagem de sonda lambda e fizemos um furo na parte de trás do coletor (com a ajuda de uma furadeira sem fio, uma lima rotativa e muito WD-40). 
Para nossa surpresa (nada positiva) a ponta de leitura da sonda acabou ficando escondida dentro da porca e da parede do coletor, e afastada do fluxo dos gases de escape. Tivemos que cortar alguns centímetros da porca para dar espaço. A falta de uma morsa e de uma esmerilhadeira foram um desafio que tivemos que superar através de uma série de adaptações: prendemos a porca em um alicate de pressão e usamos uma micro-retífica com um disco de corte para fazer o trabalho.Acabamos com 8 discos de corte (7 deles (de qualidade inferior) quebraram no meio do processo) e não conseguimos terminar o corte da porca antes de os discos de corte acabarem (dica: não economizem nos discos de corte). Acabamos finalizando o corte com um arco de serra e muito WD-40.
A solda da porca no coletor foi feita pelo pessoal da manutenção na EACH, fomos muito bem-atendidos e o processo levou poucos minutos*.

Concluímos a modelagem da primeira versão do coletor novo de admissão. Decidimos por usar a válvula de borboleta original do carburador por um conjunto de motivos:

* Projetar uma válvula de borboleta para colocar no coletor impresso não seria fácil
* Montar um coletor em PLA diretamente no bloco do motor poderia derreter o coletor
* A válvula de borboleta original já possui um acionador conveniente na empunhadura da serra

Partindo dessas condições, nossa ideia é travar o afogador na posição completamente aberta, remover todo o combustível da motosserra e montar o novo coletor entre o carburador (que basicamente vai servir somente como corpo de borboleta por praticidade) e o filtro de ar (ou não usar o filtro de ar e rodar o motor sem, não deve fazer muita diferença).

Estamos agora aguardando a chegada da bomba de combustível e do driver L298n
### Próximos passos

Reunir o grupo para finalizar a montagem assim que as peças chegarem

* Créditos: Agradecemos à equipe de manutenção da EACH e ao professor Nakano por ter intermediado o contato.

===========================================================================================
## Semanas dos dias 29 de Novembro e 03 de Dezembro

Tiradas as medidas do bico injetor, foi feita a peça de suporte do bico para acoplar no motor (foi feito mais de 1, por motivos de falhas nos primeiros modelos).<br/>
<br/>
Implementamos o <a href="https://github.com/TsuHub/ComputacaoFisica/blob/main/Arduino/Controlador%20driver%20L298n%20de%20duas%20pontes%20H/Código/DriverHandler.ino">código</a> controlador do driver L298n no Arduino, fizemos o deploy e montamos os circuitos<br/>
(Arduino UNO + Driver L298n de duas pontes H + jumpers + Fonte 12V de 2A).<br/>
O Driver é divido em duas partes controladoras, lados 'A' e 'B' (além dos pinos de alimentação de 12V e de aterramento GND).<br/>
Cada um dos lados é responsável por fazer o controle de algum dispositivo (motor, bico injetor, entre outros).<br/>
Utilizamos apenas o lado 'A' para fazer a abertura e fechamento da válvula do bico injetor para o controle do fluxo de gasolina com a frequência de 125Hz.<br/>
O Arduino trabalha com o tempo em milésimos de segundo, portanto, para que 125 aberturas e fechamentos sejam efetuados dentro de 1s, a abertura e fechamento da válvula deve ocorrer a cada 8ms. Para a alimentação do circuito, utilizamos uma fonte de 12V e 2A. Pelos testes que fizemos até agora neste circuito, está tudo ocorrendo bem.<br/>
<br/>
Compramos 2L de gasolina e reservamos devidamente em um galão próprio para isto (imagem e especificação logo abaixo).<br/>
A bomba não pode ser alimentada com uma fonte de 2A, então não conseguimos efetuar os testes com a bomba.<br/>
A boa notícia é que providenciamos uma fonte que consegue atender as nossas necessidades (imagem e especificação logo abaixo).<br/>
(um dos integrantes desmontou a fonte de seu computador*)<br/>
A má notícia é que não fizemos os testes ainda, por conta dos empecilhos, a fonte foi providenciada muito recentemente.<br/>
<br/>


### As peças:

![Arduino|Driver|Bomba|SensorMagnetico](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Arduino%20%2B%20Driver%20L298n%20com%20duas%20pontes%20H%20%2B%20Bomba%20%2B%20Sensor%20magnético.png)
(Arduino | Driver L298n de duas pontes H | Bomba | Sensor magnético)<br/>
<br/>
![Fonte12V_2A](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Fonte%2012V%20-%202A.png)
(Imagem meramente ilustrativa: Fonte 12V - 2A)<br/>
<br/>
![Fonte12V](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Fonte%2012V.png)
(Fonte ATX GP400A 400W Real 80PLUS/PFC/BIVOLT)<br/>
<br/>
![MotorCarburado](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Motor%20da%20serra%20elétrica%20(já%20com%20a%20sonda%20soldada).png)
(Motor Nagano MN 6000 carburado da serra elétrica - capacidade de 500ml de gasolina, já com a sonda lambda embutida no coletor)<br/>
<br/>
![BicoInjetor|Suporte](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Suporte%20para%20bico%20feito%20na%20impressora%203D%20%2B%20Bico%20injetor.png)
(Suporte do bico impresso na impressora 3D | Bico injetor)<br/>
![](https://github.com/TsuHub/ComputacaoFisica/blob/main/Imagem%20das%20peças/Galão%20Metálico%2020L.png)
(Imagem meramente ilustrativa: Galão metálico 20L)<br/>
<br/>

* Estamos cientes que o projeto ainda não terminou, faltam algumas coisas, mas já agradecemos as ajudas do professor Nakano por ter sido muito solícito durante todo o projeto, a equipe de manuntenção da EACH e aos esforços dos integrantes.<br/>
<br/>
### Próximos passos
Reunir o grupo novamente para fazer o teste da bomba de combustível, acoplar o sensor magnético ao motor para a sincronia da válvula do bico injetor com o motor de 2 tempos.
