//3) Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar. 

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
