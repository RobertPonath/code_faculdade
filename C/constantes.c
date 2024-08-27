#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float nota1, nota2;
    float media;
    printf("digite a primeira nota....: ");
    scanf("%f", &nota1);

    printf("digite a segunda nota....: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A média do aluuno é..:%.2f| ");

}