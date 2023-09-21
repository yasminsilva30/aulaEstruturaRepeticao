#include<stdio.h>

main(){

    int contador = 0, soma = 0, numero;

    while (contador < 50) {
        numero = numero + 2;
        soma += contador;
        contador++;
        printf("\n %d %d %d", contador, numero, soma);
    }

}