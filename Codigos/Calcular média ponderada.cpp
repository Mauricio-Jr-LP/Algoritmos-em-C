/*6.Fa�a um algoritmo que leia quatro numeros informados pelo usu�rio e que depois imprima a m�dia ponderada,
sabendo-se que os pesos s�o respectivamente:  1, 2, 3 e 4*/

#include<stdio.h>
#include<stdlib.h>

int main()

//Variaveis
{int n1, n2, n3, n4, res;
//Inicio algoritmo
printf("Primeiro Numero\n");
scanf("%d", &n1);
printf("Segundo Numero\n");
scanf("%d", &n2);
printf("Terceiro Numero\n");
scanf("%d", &n3);
printf("Quarto Numero\n");
scanf("%d", &n4);
res=(n1*1)+(n2*2)+(n3*3)+(n4*4)/10;
printf("O resutado eh:%d\n", res);
system("pause");
//Fim algoritmo
}
