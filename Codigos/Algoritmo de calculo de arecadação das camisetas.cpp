#include<stdio.h>
#include<stdlib.h>

int main()

/*7.	Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida 
respectivamente por 10, 12 e 15 reais. Construa um algo ritmo em que o usuário forneça a quantidade de 
camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.*/

{int cp, cm, cg;
float total;
printf("Quantidade de camisetas pequenas\n");
scanf("%d", &cp);
printf("quantidade de camisetas medias\n");
scanf("%d", &cm);
printf("quantidade de camisetas grandes\n");
scanf("%d", &cg);
total = (cp*10)+(cm*12)+(cg*15);
printf("O valor total arrecadado foi %2.2f", total);
return 0;
}
