# SequenciaFibonacci
Esse algoritmo reproduz a sequência de Fibonacci, o fiz como fixação dos conhecimentos obtidos na disciplina de Lógica de Programação utilizando a linguagem C, fortemente tipada.
# Sequência de Fibonacci em C

Implementa um programa em **C** que exibe os **oito primeiros termos** da sequência de Fibonacci.

## 📌 Como funciona o código?

- Define duas variáveis `p1` e `p2` como `0` e `1`, que são os primeiros termos da sequência.
- Exibe esses valores iniciais com `printf()`.
- Usa um **loop `for`** para calcular os próximos termos até o oitavo elemento:
  - O próximo valor da sequência é obtido com `resultado = p1 + p2`.
  - O valor é impresso na tela.
  - Atualiza `p1` e `p2` para continuar a sequência.

## 🚀 Exemplo de saída do programa:

```plaintext
0	1	1	2	3	5	8	13
