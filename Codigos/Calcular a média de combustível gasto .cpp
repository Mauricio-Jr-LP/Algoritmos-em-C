/*5. Calcular a m�dia de combust�vel gasto pelo usu�rio, 
sendo informado a quantidade de quil�metros rodados e a quantidade de combust�vel consumido.*/

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
