//1) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C. 

#include<stdio.h>
#include<stdlib.h>

int main ()

//variaveis
{int a, b, c, r; 
//Inicio algoritmo
printf("Digite o primeiro valor\n");
scanf("%d", &a);
printf("Digite o segundo valor\n");
scanf("%d", &b);
printf("Digite o terceiro valor\n");
scanf("%d", &c);
r=a+b;

if (c>r)
	 printf("A soma de A+B eh menor que C \n");
		else
		{
		printf("A soma eh maior que C \n");
		}
system("pause");
//Fim algoritmo
}
