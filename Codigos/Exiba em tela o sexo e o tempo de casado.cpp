/*2)Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 
Caso sexo seja "F" e estado civil seja "CASADA", 
solicitar o tempo de casada (anos) e exiba em tela o sexo e o tempo de casado.*/

#include<stdio.h>
#include<stdlib.h>

int main()


{int   f, m, ec, tc;
char nomi[50], sx, s, c;

printf("Digite o seu nome\n");
scanf("%s", &nomi);
printf("Digite seu sexo\n");
fflush(stdin);
scanf("%c", &sx);
printf("Digite seu estado civil\n");
fflush(stdin);
scanf("%c", &ec);

if(sx == 'f' && ec == 'c')
{
	printf("Tempo (em anos) de casamento\n");
	fflush(stdin);
	scanf("%d", &tc);
	printf("Voce eh mulher casada a:%d, anos\n", tc);
	fflush(stdin);
}
system("pause");
} 
