//7. Programa que monte os oito primeiros termos da sequência de Fibonacci
// 0  1  1  2  3  5  8  13  21  34  55
#include<stdio.h>

int main ()
{
    int p1, p2, resultado, i;
    p1 = 0;
    p2 = 1;

     printf ("\t%d", p1);
     printf ("\t%d", p2);
    
// Laço de repetição para iterar a lógica de Fibonacci
    for (i = 3; i <=8; i++)
    {
         resultado = p1 + p2;
         printf ("\t%d", resultado); //printei 1 3ª posição
         p1 = p2;
         p2 = resultado;
    }

    getchar ();
    return 0;
}
