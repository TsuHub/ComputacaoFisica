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
[testeResultado](PrototipoSonda/resultadosTeste.png)
<br/>

### Proximos Passos:

Realizar o furo do ponto de entrada na carcaça da serra eletrica.
Descobrir como fazer com que o bico de injeção funcione.
Instalar a sonda no escapamento.
Instalar o bico de injeção.
Instalar o circuito.
