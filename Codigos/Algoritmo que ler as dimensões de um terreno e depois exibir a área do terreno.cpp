#include<stdio.h>
#include<stdlib.h>

/*1. imobili�ria Im�bilis vende apenas terrenos retangulares. 
Fa�a um algoritmo para ler as dimens�es de um terreno e depois exibir a �rea do terreno.*/ 

int main()

{float l, c, a;
    
	printf("Digite a largura do lote\n");
    scanf("%f", &l);
    printf("Digite o cumprimento do lote\n");
    scanf("%f", &c);
    
    a = l*c; 
    
	printf("A area do lote = %.2f\n", a);
    
	system("pause");
	return 0;
}
