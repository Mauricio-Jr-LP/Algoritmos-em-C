/*8) Tendo como dados de entrada a altura e o sexo de uma pessoa, 
construa um algoritmo que calcule seu peso ideal,
 utilizando as seguintes fórmulas:
 ? para homens: (72.7 * h) - 58; ? para mulheres: (62.1 * h) - 44.7. */

#include<stdio.h>
#include<stdlib.h>

int main()

{int sx, m, f;
float alt, idealf, idealm;

printf("Sua altura\n");
scanf("%f", &alt);
printf("Seu sexo\n");
fflush(stdin);
scanf("%d", &sx);

if (sx == m)
{
	idealm = (727/10) * (alt/100)-(58);
	printf("Seu peso ideal eh ; %2.2f", idealm);
}
		else
			if (sx==f)
			{
			idealf = (621/10)*(alt/100)-(44,7);
			printf("Seu peso ideal eh ; %2.2f", idealf);
			}
system("pause");
}
