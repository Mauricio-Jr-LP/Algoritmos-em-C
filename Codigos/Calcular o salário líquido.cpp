/*4.Calcular o salário líquido do funcionário sabendo que este é constituído pelo salário
bruto mais o valor das horas extras subtraindo 8% de INSS do total.
Serão lidos nesse problema o salário bruto, o valor das horas extras e o numero de horas extras.
Apresentar ao final o salário líquido.*/

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
