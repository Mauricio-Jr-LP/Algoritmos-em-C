#include<stdio.h>
#include<stdlib.h>

// n ta nem mostrando os printf dos sexos

/*2) Faça um programa que receba o peso, a altura e o sexo da pessoa (M ou F), 
calcula e imprima o seu peso ideal utilizando as fórmulas abaixo e indique 
se a pessoa está abaixo ou acima do peso.
- Para homens: 	(72.7 * Altura)  - 58
- Para mulheres: 	(62.1 * Altura) - 44.7
*/

int main()

{char sexo, m, f;
float peso, altura, imcm, imcf;

printf("Digite seu peso \n");
scanf("%f", &peso);
printf("Digite sua altura \n");
scanf("%f", &altura);
fflush(stdin);
printf("Digite seu sexo \n");
fflush(stdin);
scanf("%c", &sexo);

//Abaixo de 18,5 Abaixo do peso Entre 18,5 e 25 Peso normal Entre 25 e 30 Acima do peso Acima de 30 obeso

if(sexo=='m'){
imcm=(727/10)*(altura/100)-58;
printf("Seu imc eh %2.2f", imcm);
}
if(sexo!='m')
imcf=(62,1*altura)-44,7;
printf("Seu imc eh %f", imcf);

}
