#include <stdio.h>
#include <stdlib.h>

#define MEDIA_PONDERADA(n1, p1, n2, p2, n3, p3) ( ((n1)*(p1) + (n2)*(p2) + (n3)*(p3)) / ((p1)+(p2)+(p3)) )



int main()
{
    float nota1, peso1;
    float nota2, peso2;
    float nota3, peso3;
    float resultado;

    printf("Digite os valores da primeira nota: "); scanf(" %f", &nota1);
    printf("Digite o valor do peso 1: "); scanf(" %f", &peso1);
    printf("\n");


    printf("Digite os valores da segunda nota: "); scanf(" %f", &nota2);
    printf("Digite o valor do peso 2: "); scanf(" %f", &peso2);
    printf("\n");

    printf("Digite os valores da terceira nota: "); scanf(" %f", &nota3);
    printf("Digite o valor do peso 1: "); scanf(" %f", &peso3);
    printf("\n");

 resultado = MEDIA_PONDERADA(nota1, peso1, nota2, peso2, nota3, peso3);
    printf("Sua media ponderada final %f", resultado);

    if (resultado < 6)
        printf("\n Você foi Aprovado");
    else
        printf("\n Você foi Reprovado");
}
