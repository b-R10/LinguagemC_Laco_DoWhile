#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;
    float a, compra;
    
    //////////////////////////////////////////////////////////////////
    // Inserção dos valores unitários e contagem de itens da compra //
    //////////////////////////////////////////////////////////////////

    do{
        printf("Digite o valor unitario de cada produto:\n");
        scanf("%f", a);
        if(a > 0){
            i++;
            compra += a;
        }
    } while(a > 0);
    printf("Quantidade de itens: %i", i);
    printf("Valor da compra: %f", compra);
    return 0;
}