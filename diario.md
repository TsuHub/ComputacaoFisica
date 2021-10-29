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
<br/>
Tiradas as medidas das peças, uma lista dos próximos passos foi criada:<br/>
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

