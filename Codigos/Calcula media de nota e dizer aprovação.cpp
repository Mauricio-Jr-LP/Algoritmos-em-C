#include<stdio.h>
#include<stdlib.h>

int main()

//Erro n reprova por falta		

/* 1)	Faça um programa que leia o número de aulas de uma disciplina, as 2 notas do semestre de um aluno 
e o número de faltas semestrais deste aluno. Com estes dados o programa calcula e imprime a média aritmética, o 
percentual de falta e a situação final do aluno.
A situação final do aluno seguirá a seguinte regra:
- O aluno estará aprovado se o a média for maior ou igual a 7
- O aluno terá direito a recuperação se a média for superior a 3
- O aluno estará reprovado por nota se a média for inferior a 3 
- O aluno estará reprovado por falta se a freqüência for inferior a 75%
*/


{int aulas, faltas;
float media, percentual, n2, n1;

printf("Digite o numero de aulas da disciplina\n");
scanf("%d", &aulas);
printf("Digite uma nota\n");
scanf("%f", &n1);
printf("Digite uma nota\n");
scanf("%f", &n2);
printf("Digite o numero de faltas semestrais\n");
scanf("%d", &faltas);

faltas=1;


percentual=(faltas/100);
media=n1+n2/2;

if(percentual<(75/100)){
	printf("Reprovado por faltas \n");
}
if(media>=7){
	printf("Aprovado \n");
}
else
if((media>=3) && (media<=6,9)){
	printf("Recuperacao \n"); 
}
else 
if(media<3){
	printf("Reprovado \n");
}
system("pause");
return 0;
}
