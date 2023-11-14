#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, i = 0;
    float altura;
    do{
        printf("Digite a idade da pessoa: ");
        scanf("%i", &idade);
        if (idade >= 30)
            i++;
        printf("Digite a altura: ");
        fflush(stdin);
        scanf("%f", &altura);
    } while (idade > 15 && altura < 1.75);
    printf("%i", i);
    return 0;
}