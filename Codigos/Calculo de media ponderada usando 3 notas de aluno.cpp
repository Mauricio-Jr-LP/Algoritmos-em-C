/*10.Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, 
considerandoque o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, 
suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" 
se a média for menor que 5. */

#include<stdio.h>
#include<stdlib.h>

int main()

{float n1, n2, n3, mp;

printf("Digite a 1ª nota\n");
scanf("%f", &n1);
printf("Digite a 2ª nota\n");
scanf("%f", &n2);
printf("Digite a 3ª nota\n");
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
