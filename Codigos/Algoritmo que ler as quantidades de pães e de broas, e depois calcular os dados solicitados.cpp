#include<stdio.h>
#include<stdlib.h>

int main()


/*3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. 
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, 
o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos),
e quanto' deve guardar numa conta de poupan�a (10% do total arrecadado). 
Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, 
fa�a um algoritmo para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados.*/

{int qntpaes, qntbroas;
float totaldv, eco;

printf("Digite a quantidade de paozinhos\n");
scanf("%d", &qntpaes);
printf("Digite a quantidade de broas\n");
scanf("%d", &qntbroas);
 
//p�ozinho custa R$ 0,12 e a broa custa R$ 1,50
//conta de poupan�a (10% do total arrecadado)

totaldv=qntpaes*0.12+qntbroas*1.50;
eco=totaldv*0.10;

printf("O total de vendas foi %2.2f \n", totaldv);
printf("O valor a ser adicionado a conta de poupan�a eh %2.2f \n", eco);
system("pause");
}
