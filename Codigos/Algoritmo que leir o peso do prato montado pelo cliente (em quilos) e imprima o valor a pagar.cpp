/*5. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. 
Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. 
Assuma que a balança já desconte o peso do prato. */

#include<stdio.h>
#include<stdlib.h>

int main()


{float pp, pfp, pm, tp;

printf("Digite o peso total do prato\n");
fflush(stdout);
scanf("%f", &pp);
printf("Digite o peso fixo do prato\n");
scanf("%f", &pfp);

pm = pp-pfp;
tp = pm*12.00;

printf("%2.2f total a pagar %2.2f", pm, tp);
return 0;
system ("pause");
}
