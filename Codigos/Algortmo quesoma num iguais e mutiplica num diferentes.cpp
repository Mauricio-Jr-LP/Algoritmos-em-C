/*3) Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois, 
caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma 
vari�vel C e mostrar seu conte�do na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main()

{int a, b, c;

printf("Digite o valor de A\n");
scanf("%d", &a);
printf("Digite o valor de B\n");
scanf("%d", &b);


if(a==b)
		{
		c=a+b;printf("Como A e B sao iguais foi somado e o resultado eh %d \n", c);
    	}
		else
			{
			c=a*b;
			printf("Como A e B sao diferentes foi multiplicado e o resultado eh %d \n", c);
			}
} 
