/*10.Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas. Calcule a m�dia ponderada do aluno, 
considerandoque o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o c�digo do aluno, 
suas tr�s notas, a m�dia calculada e uma mensagem "APROVADO" se a m�dia for maior ou igual a 5 e "REPROVADO" 
se a m�dia for menor que 5. */

#include<stdio.h>
#include<stdlib.h>

int main()

{float n1, n2, n3, mp;

printf("Digite a 1� nota\n");
scanf("%f", &n1);
printf("Digite a 2� nota\n");
scanf("%f", &n2);
printf("Digite a 3� nota\n");
scanf("%f", &n3);

if ((n1>n2) && (n1>n3))
{
     mp=(n1*4)+(n2*3)+(n3*3)/10;
	 printf("Sua media eh %2.2f\n", mp);
	 if(mp>=5)
	 printf("Aprovado");
	 else
	 printf("rprovado");
}
}
