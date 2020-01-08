#include <stdio.h>

int main (void) {

/* Variáveis */
int numero;
float quilogramas, libras;

/* Opções */

printf("Qual é a conversão que deseja fazer: \n");
printf("1- Quilogramas(kg) em Libras(lb) \n");
printf("2- Libras(lb) em Quilogramas(kg) \n");
scanf("%d", &numero);


/* Resultado */
switch (numero)
{
case 1:
    printf("Quantos quilogramas? \n");
    scanf("%f", &quilogramas);
    libras = quilogramas * 2.2;
    printf("%0.2f lb \n", libras);
    break;
case 2:
    printf("Quantas libras \n");
    scanf("%f", &libras);
    quilogramas = libras / 2.2;
    printf("%0.2f kg \n", quilogramas);
    break;

default:
    printf("Opção inválida \n");
}
}