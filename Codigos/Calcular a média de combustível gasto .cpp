/*5. Calcular a média de combustível gasto pelo usuário, 
sendo informado a quantidade de quilômetros rodados e a quantidade de combustível consumido.*/

#include<stdio.h>
#include<stdlib.h>

int main()

//Variaveis
{int cb, qr, res, resf;
//Inicio algoritmo
printf("Combustivel gasto\n");
scanf("%d", &cb);
printf("Quilometros rodados\n");
scanf("%d", &qr);
res=cb+qr;
resf=res/2;
printf("O resutado eh:%d\n", resf);
system("pause");
//Fim algoritmo
}
