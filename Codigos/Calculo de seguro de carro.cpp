#include<stdio.h>
#include<stdlib.h>
#include <iostream>

/*4)	Uma empresa de seguros calcula o valor de um seguro para um carro obedecendo a seguinte tabela:
Ano do Carro	Faixa de Idade	      Homem / Mulher             	Valor
Antes de 2008	18 a 30 anos           	Homem	                 R$ 500,00
Antes de 2008	Acima de 30 anos	    Homem	                 R$ 450,00
Antes de 2008	18 a 30 anos           	Mulher	                 R$ 470,00
Antes de 2008	Acima de 30 anos       	Mulher                 	 R$ 430,00
2008 acima   	A partir de 18	     Homem/Mulher	             R$ 600,00
Além disso, para carros do modelo Gol, Fusca, Uno e Corsa, os mais visados pelos ladrões, a seguradora 
acrescenta 5%  sobre o valor do seguro.
Faça um programa que leia o modelo do carro (um caracter), o ano do carro, a idade do condutor e o sexo 
(um caracter)  do condutor e atribui o valor do seguro do carro. */

int main()

{int ano, id;
char model, sexo, g, f, u, c, m;
float tx;

printf("Modelo do seu carro (Digite a letra inicial) \n");
scanf("%c", &model);
printf("Ano do carro \n");
scanf("%d", &ano);
printf("Sua idade \n");
scanf("%d", &id);
printf("Seu sexo (m para masculino ou f para femenino) \n");
fflush(stdin);
scanf("%c", &sexo);
if ((ano<2008) && (id>= 18) && (id<=30) && (sexo=='m') && (model=='g')){
	tx=500+5/100;
	fflush(stdin);
	printf("O valor eh  %2.2f \n", &tx);
}
}
