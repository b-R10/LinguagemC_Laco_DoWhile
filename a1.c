#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float a,b;
    char sair;
    
    do{    
        printf("Digite o numerador: ");
        scanf("%f", &a);
        do{
            printf("Digite o denominador: ");
            scanf("%f", &b);
            if (b == 0)
                printf("Erro: denominador nao pode ser 0.\n");
        } while (b == 0);    
        printf("Resultado = %f", a/b);
        printf("\n\nDeseja sair do programa (s/n): ");
        fflush(stdin);
        scanf("%c", &sair);
    } while (sair != 'S' && sair != 's');
    return 0;
}