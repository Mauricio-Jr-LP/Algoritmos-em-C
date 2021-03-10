#include<stdio.h>
#include<stdlib.h>

int main()


/*3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. 
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, 
o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos),
e quanto' deve guardar numa conta de poupança (10% do total arrecadado). 
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, 
faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.*/

{int qntpaes, qntbroas;
float totaldv, eco;

printf("Digite a quantidade de paozinhos\n");
scanf("%d", &qntpaes);
printf("Digite a quantidade de broas\n");
scanf("%d", &qntbroas);
 
//pãozinho custa R$ 0,12 e a broa custa R$ 1,50
//conta de poupança (10% do total arrecadado)

totaldv=qntpaes*0.12+qntbroas*1.50;
eco=totaldv*0.10;

printf("O total de vendas foi %2.2f \n", totaldv);
printf("O valor a ser adicionado a conta de poupança eh %2.2f \n", eco);
system("pause");
}
