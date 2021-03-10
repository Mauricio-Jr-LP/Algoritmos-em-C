#include<stdio.h>
#include<stdlib.h>

/*1. imobiliária Imóbilis vende apenas terrenos retangulares. 
Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.*/ 

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
