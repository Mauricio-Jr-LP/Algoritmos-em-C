/*Construa um programa que leia a quantidade (Q) e o preço (PR) de vários produtos diferentes, 
comprados por uma empresa, e apresente o total gasto por ela.
O final da lista de produtos deverá ser indicado pelo usuário (escolha a maneira que preferir).
OBS: Não se esqueça de validar a entrada dos valores, pois não são aceitas quantidades negativas, nem preços 
negativos.*/

#include <stdlib.h>
#include<stdio.h>

// Ss e n n funcina

int main()
{
  
  int q=1, pr=1;
  char r, s , n, c;
  float tt;

  do{
  printf("Digite a quantidade do produto comprado: ");
  scanf("%d",&q);
  printf("Digite o valor da unidade do produto comprado: ");
  scanf("%d",&pr);  
  printf("Deseja continuar sim(digite s) ou nao(digite n)");
  fflush(stdin);
  scanf("%c", &r);
  if(r=='n'){
  	tt=q*pr;
  	printf("O total gasto foi %2.2f\n", tt);
  }  
}while(r=='s');
}
