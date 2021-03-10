//2. Efetuar a soma de três números digitados pelo usuário e imprimir o resultado

#include<stdio.h>
#include<stdlib.h>

int main()

//Variaveis
{int n1, n2, n3, res;
//Inicio algoritmo
printf("Primeiro Numero\n");
scanf("%d", &n1);
printf("Segundo Numero\n");
scanf("%d", &n2);
printf("Terceiro Numero\n");
scanf("%d", &n3);
res=n1+n2+n3;
printf("O resutado da soma eh:%d\n", res);
system("pause");
//Final algorito
}
