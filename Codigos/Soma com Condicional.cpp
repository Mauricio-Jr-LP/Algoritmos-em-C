/*4) Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois,
 caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para 
 uma vari�vel C e mostrar seu conte�do na tela.*/

#include<stdio.h>
#include<stdlib.h>
int main()

//Variaveis
{int p1, p2, n3;

//Algoritimo inicio
printf("Primeiro valor\n");
scanf("%d", &p1);
printf("Segundo valor\n");
scanf("%d", &p2);

if (p1 == p2) 
{
	n3= p1 + p2;
	printf("O resutado de C eh: %d", n3);
} 
		else 
		 {
			n3= p1*p2;
			printf("O resutado de C eh; %d", n3);
		 }	
system("pause");
//Fim algoritmo
}
