#include <stdio.h>

int main(){

/* Variáveis */
int X;
int Y;
int soma;

/* Inputs e Outputs */
printf("Primeiro Número? \n");
scanf("%d", &X);
printf("Segundo Número? \n");
scanf("%d", &Y);

/* Cálculo */
soma = X + Y;

/* Condições */
if (X > Y)
{
    printf("A soma dos dois número é %d \n", soma);
    printf("O maior valor introduzido foi o X \n");
}else if (X < Y)
{
    printf("A soma dos dois número é %d \n", soma);
    printf("O maior valor introduzido foi o Y \n");
}else{ 
    printf("A soma dos dois número é %d \n", soma);
    printf("Ambos valores de X e Y são iguais \n");
}






}