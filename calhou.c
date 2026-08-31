/*
===============================================================================
💻 DESAFIO C99: O SIMULADOR DE LANÇAMENTO DE PROJÉTIL
===============================================================================

SUA MISSÃO:
Escrever um programa do zero em C99 que calcule a altura de um projétil a cada 
segundo até que ele atinja o chão.

REGRAS E PASSOS DO PROGRAMA:

1. ENTRADA DE DADOS:
   - Peça para o usuário digitar a velocidade inicial 'v' (em m/s).
   - Peça o ângulo de lançamento 'a' (em graus).
   - Use variáveis do tipo 'double' para ambas.

2. PREPARAÇÃO MATEMÁTICA:
   - Inclua a biblioteca <math.h> para usar funções trigonométricas.
   - Converta o ângulo de graus para radianos. 
     Fórmula: radianos = angulo * (3.14159 / 180.0)

3. O LOOP DE SIMULAÇÃO (REGRA C99):
   - Crie um loop 'for'.
   - Declare a variável de tempo 'int t = 0' DIRETAMENTE dentro do 'for'.
   - O tempo deve avançar de 1 em 1 segundo (t++).

4. CÁLCULO DA FÍSICA (Dentro do loop):
   - Considere a gravidade g = 9.8
   - Calcule a altura 'y' usando a função sin() da <math.h>:
     y = (v * sin(radianos) * t) - (0.5 * g * t * t)

5. CONDIÇÃO DE PARADA:
   - Se a altura 'y' calculada for menor que zero, significa que o projétil 
     atingiu o solo. Use o comando 'break' para encerrar o loop imediatamente.

6. SAÍDA DE DADOS:
   - A cada segundo do loop, mostre o tempo e a altura atual formatados 
     com duas casas decimais (Ex: "Tempo: %d s | Altura: %.2f m").

Boa sorte! Quando voltar e terminar o código, é só colar ele aqui no chat.
===============================================================================
*/
