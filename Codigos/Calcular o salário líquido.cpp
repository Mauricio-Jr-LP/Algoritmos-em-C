/*4.Calcular o sal�rio l�quido do funcion�rio sabendo que este � constitu�do pelo sal�rio
bruto mais o valor das horas extras subtraindo 8% de INSS do total.
Ser�o lidos nesse problema o sal�rio bruto, o valor das horas extras e o numero de horas extras.
Apresentar ao final o sal�rio l�quido.*/

#include<stdio.h>
#include<stdlib.h>

int main()

//variaveis
{double qh, inss, vh, salario_bruto, salario_liquido;

//Inicio algoritmo
printf("Digite a quantidade de horas \n");
scanf("%lf", &qh);
printf("Digite o valor da hora \n");
scanf("%lf", &vh);
printf("Digite o numero do percentual do INSS \n");
scanf("%lf", &inss);

salario_bruto=qh*vh;
salario_liquido=salario_bruto-(inss/100)*salario_bruto;

printf("O seu salrio liquido eh R$ %.2f \n", salario_liquido);
//Final algoritmo
}
