/*5)  O IMC - Indice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de para dar umaindica��o sobre 
a condi��o de peso de uma pessoa adulta. A f�rmula � IMC = peso / ( altura )2  Elabore um algoritmo que leia o 
peso e a altura de um adulto e mostre sua condi��o de acordo com a tabela abaixo. 
IMC em adultos Condi��o Abaixo de 18,5 Abaixo do peso Entre 18,5 e 25 Peso normal Entre 25 e 30 Acima do peso 
Acima de 30 obeso */

#include<stdio.h>
#include<stdlib.h>

int main()

{float peso, altura, imc;

printf("Digite seu peso \n");
scanf("%f", &peso);
printf("Digite sua altura em centimetros \n");
scanf("%f", &altura);

imc=peso/(altura*altura);

if(imc<18,5)
     {
      printf("Abaixo do peso");
     }
        else
          if((imc>=18,5) && (imc<=25))
          {
           printf("Peso normal");
		  }
		    else
		     if(imc>25)
			 {
			  printf("Acima do peso");
			 }
}
