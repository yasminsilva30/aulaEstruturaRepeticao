#include<stdio.h>

main(){

    int numero;

    printf("Digite um numero: ");
    scanf("\n %d", &numero);

    for (int c = 1; c <= numero; c+=2) {
        printf("\n %d", c);
    }

    /*for (int c = 0; c <= numero; c++) {
        if (c % 2 == 1) {
            printf("\n %d", c);
        }
    }*/

}