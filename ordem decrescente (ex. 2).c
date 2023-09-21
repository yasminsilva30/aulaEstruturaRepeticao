#include<stdio.h>

main(){

    int numero;

    printf("Digite um numero: ");
    scanf("\n %d",&numero);

    for(int c = numero; c >= 0; c--) {
        printf("\n %d", c);
    }

}