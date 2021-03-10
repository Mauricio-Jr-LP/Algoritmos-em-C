/*Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja "F" e estado civil seja "CASADA", 
solicitar o tempo de casada (anos) e posteriormente exibir os dados em tela.*/

#include<stdio.h>
#include<stdlib.h>

int main()

{int  anos, m, f, c;
char ec, nome[51], sx; 

printf("Your name\n");
scanf("%s", &nome);
printf("Digite seu sexo (M para masculino e F para femenino)\n");
fflush(stdin);
scanf("%c", &sx);
printf("Digite seu estado civil (C para casado e S para solteiro)\n");
fflush(stdin);
scanf("%c", &ec);

if((sx == 'f') && (ec == 'c'))
{
	printf("Digite quanto tempo de casada vc tem em anos\n");
	fflush(stdin);
	scanf("%d", &anos);
	printf("Vc eh casada a %d anos", anos);
	fflush(stdin);
}
system ("pause");
}
