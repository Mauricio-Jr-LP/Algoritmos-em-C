/*1) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C. */

#include<stdio.h>
#include<stdlib.h>

int main()

{int r, a, b, c;

printf("Digite o valor de A\n");
scanf("%d", &a);
printf("Digite o valor de B\n");
scanf("%d", &b);
printf("Digite o valor de C\n");
scanf("%d", &c);

r=a+b;

if(r>c)
     {
      printf("A soma que deu o resutado de %d foi maior que o valor de C  ", r);
     }
        else 
         {
         printf("A soma que deu o resutado de %d foi menor que o valor de C ", r);
         }
system("pause");
}
