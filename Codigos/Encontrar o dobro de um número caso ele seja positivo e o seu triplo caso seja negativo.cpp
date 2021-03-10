/*5) Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, 
imprimindo o resultado.*/

#include<stdio.h>
#include<stdlib.h>

int main()

//Variaveis
{int n, dobro, triplo;

//Algoritmo inicio
printf("Digite o primeiro numero inteiro\n");
scanf("%d", &n);

if (0 < n)
{
	 dobro = n * 2;
	 printf("O resultado eh: %d\n", dobro);
}
		else 
		{
			triplo = n * 3;
			printf("O resultado eh: %d\n", triplo);
		}
system("pause");
//Fim algoritmo
}
