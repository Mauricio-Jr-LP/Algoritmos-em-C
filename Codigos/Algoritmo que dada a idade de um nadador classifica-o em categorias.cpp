#include<stdio.h>
#include<stdlib.h>

int main()

/*8.Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos*/

{int id;

printf("Digite sua idade\n");
scanf("%d", &id);

if (id >= 5 && id <= 7){
printf("Infanil A\n");}
     if (id>=8 && id<=10){
 printf("infantil B\n");}
         if (id>=11 && id<=13){
		 printf("juvenil A\n");}
             if(id>=14 && id<=17){
			 printf("juvenil B\n");}
                 if (id>=18){
				 printf("Adulto\n");}
return 0;
}
