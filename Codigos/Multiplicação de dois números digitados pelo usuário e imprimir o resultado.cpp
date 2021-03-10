//3. Efetuar a multiplicação de dois números digitados pelo usuário e imprimir o resultado.

#include<stdio.h>
#include<stdlib.h>

int main()

//Variaveis
{int n1, n2, n3, res;
//Incio algoritmo
printf("Primeiro Numero\n");
scanf("%d", &n1);
printf("Segundo Numero\n");
scanf("%d", &n2);
res=n1*n2;
printf("O resutado da multiplicação eh:%d\n", res);
system("pause");
//Fim algoritmo
}
