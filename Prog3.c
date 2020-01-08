#include <stdio.h>

int main(){

/* Variáveis */
int numero;
float euro, usd, cad;

/* Menu */

printf("Qual é as moedas que deseja converter? \n");
printf("1. Euro - USD Dollar \n");
printf("2. USD Dollar - Euro \n");
printf("3. Euro - CAD \n");
printf("4. CAD - Euro \n");
scanf("%d", &numero);

/* Resultado */
switch (numero)
{
case 1:
    printf("€? \n");
    scanf("%f", &euro);
    usd = euro * 1.11;
    printf("%0.2f $ \n", usd);
    break;
case 2:
    printf("$? \n");
    scanf("%f", &usd);
    euro = usd / 1.11;
    printf("%0.2f €", euro);
    break;
case 3:
    printf("€? \n");
    scanf("%f", &euro);
    cad = euro * 1.45;
    printf("%0.2f CA$", cad);
    break;
case 4:
    printf("CA$? \n");
    scanf("%f", &cad);
    euro = cad / 1.45;
    printf("%0.2f €", euro);
    break;
default:
    printf("Opção inválida, Obrigado! \n");    
}
}