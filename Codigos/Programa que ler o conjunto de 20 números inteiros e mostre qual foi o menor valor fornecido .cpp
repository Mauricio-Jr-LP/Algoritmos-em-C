/*7. Construa um programa que leia o conjunto de 20 números inteiros e mostre qual foi o menor valor fornecido 
e a média desses valores.*/

#include<stdio.h>
#include<stdlib.h>

//erro ao dar media

int main()

{int nu=1, manu, menu, c=1;
float media;
manu=nu;
menu=nu;
media=0;

for(c=1; c<=10; c++){
	printf("Digite o numero\n");
	scanf("%d",&nu);
	media=media+nu;
	
	if(nu<menu)
	{
	menu=nu;
	}
	if(nu>manu)
	{
	manu=nu;
	}	
}
media=media/10;
printf("Maior numero eh %d\n", manu);
printf("Menor numero eh %d\n", menu);
printf("A media eh %2.2f\n", media);
}
