#include<stdio.h>

main(){

    int numero;

    printf("Digite um numero: ");
    scanf("\n %d",&numero);

    for(int c = 0; c <= numero; c++) {
        printf("\n %d", c);
    }

}