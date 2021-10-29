# ComputacaoFisica

## 1º Circuito com Arduino

Para a compreensão do funcionamento do arduino, foi criado um circuito<br/>
simples modelado no TinkerCad, como ilustrado na figura abaixo:

![Arduino](https://github.com/TsuHub/ComputacaoFisica/blob/main/Arduino/Monitoramento%20da%20temperatura%20e%20umidade/PNG/Arduino3_TinkerCad.png?raw=true)

Posteriormente foi criado este mesmo circuito em um Arduino utilizando o código:
https://github.com/TsuHub/ComputacaoFisica/blob/main/Arduino/Monitoramento%20da%20temperatura%20e%20umidade/Código/Teste_1_sketch_sep03a.ino

O código é responsável por viabilizar o monitoramento da variação da temperatura e umidade no ambiente,<br/>
e assim que o sensor captar uma temperatura 'n', o buzzer é acionado.

<br/>
Segue o relatório parcial com imagens de seu funcionamento e maiores detalhes no link:
https://github.com/TsuHub/ComputacaoFisica/blob/main/Arduino/Monitoramento%20da%20temperatura%20e%20umidade/Relatorio%20parcial%20(Circuito%20Arduino%20UNO%20-%20Monitoramento%20de%20temperatura).pdf

## 2º O projeto

O projeto consiste na automatização da injeção de combustível no motor.<br/>
Para o projeto estamos trabalhando com um motor de dois tempos:<br/>
(i)  Pistão do cilindro em sua posição normal, recebe combustível e oxigênio;<br/>
(ii) A vela acende uma faísca, gerando explosão e consequentemente, movendo o pistão para baixo;<br/>
<br/>
Os processos descritos acima configuram 1 ciclo de um motor de dois tempos.<br/>

### Desafios
O bico injetor precisa injetar combustível quando o cilindro está em seu estado normal.<br/>
O desafio é sincronizar a frequência do ciclo com a válvula do bico injetor.<br/>

