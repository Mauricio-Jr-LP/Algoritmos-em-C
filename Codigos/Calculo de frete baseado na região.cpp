#include<stdio.h>
#include<stdlib.h>

// fica dando 00 // incompleto

/*
3)	O site das Lojas Americanas quer calcular o valor do frete a considerar nas compras. Para isso ele utilizar� 
como base a regi�o em que um determinado usu�rio solicitou a entrega conforme tabela abaixo:
Regi�o			Percentual
Norte (N)		R$ 12,00
Nordeste (R)		R$ 10,00
Sudeste (S)		R$ 5,00
Sul (U)		R$ 8,00
Centro Oeste (C)	R$ 7,00
Fa�a um programa que leia o valor da compra e a regi�o onde mora o cliente e calcula o valor final do produto.
*/

int main()

{char regiao, norte;
float compra, vn;

printf("Digite a regiao de onde voce eh \n");
fflush(stdin);
scanf("%c", &regiao);
if(regiao==norte){

printf("Digite o valor da compra \n");
scanf("%f", &compra);

fflush(stdin);
vn=compra+12;
printf(" O valor total da compra saiu de: %f", &vn);
}
}

