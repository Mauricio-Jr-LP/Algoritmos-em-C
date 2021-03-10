//3) Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. 

#include<stdio.h>
#include<stdlib.h>
int main()

{int n;

printf("Digite um numero inteiro\n");
scanf("%d", &n);

if (n%2==0)
{
	printf("Par\n");
}
		else
		{
		 printf("Impar\n");
		}
system("pause");
}
