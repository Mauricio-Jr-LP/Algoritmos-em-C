/*9) O IMC - Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar umaindicação sobre 
a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura )2 Elabore um algoritmo que leia o 
peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo. IMC em adultos 
Condição Abaixo de 18,5 Abaixo do peso Entre 18,5 e 25 Peso normal Entre 25 e 30 Acima do peso Acima de 30 obeso
Referências. */

//n le abaixo do peso

#include<stdio.h>
#include<stdlib.h>

int main()

{float kg, mt, imc;

printf("Digite sua altura em metros\n");
scanf("%f", &mt);
printf("Digite seu peso em kg \n");
scanf("%f", &kg);

imc=kg/(mt*mt);

if(imc>30){
	printf(" Tu esta acima do peso\n");
}
else
if((imc>=25) && (imc<30)){
	printf("Faixa de peso acima do ideal\n");
}
else
if((imc>=18,5) && (imc<25)){
	printf("Faixa de peso ideal\n");
}
else
if((imc<18,5) && (imc>=0)){
	printf("Esta abaixo do peso ideal\n");
}
printf("Seu IMC eh %2.2f", imc);
}
