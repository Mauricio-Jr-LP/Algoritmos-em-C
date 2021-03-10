/*Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o aluno 
foi aprovado, se o valor da média escolar for maior ou igual a 5. Se o aluno não foi aprovado, indicar uma 
mensagem informando esta condição. Apresentar junto das mensagens o valor da média do aluno para qualquer 
condição.*/

#include<stdio.h>
#include<stdlib.h>

int main()

{float media, n1, n3, n2, n4;

printf("Digite uma nota\n");
scanf("%f", &n1);
printf("Digite uma nota\n");
scanf("%f", &n2);
printf("Digite uma nota\n");
scanf("%f", &n3);
printf("Digite uma nota\n");
scanf("%f", &n4);

media=n1+n2+n3+n4/4;

if(media>=5){
	printf("Esta aprovado com a media %2.2f parabens", media);
}
else
if (media<5){
	printf("Esta reprovado sua media foi %2.2f", media);
}
}
