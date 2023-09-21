#include<stdio.h>
#include<string.h>

main(){

    int opcao, fruta, qtde, totalFruta = 0;
    float totalCompra = 0, precoFruta = 0;
    char nomeFruta[20];

    do {
        printf("Adicione uma fruta: 1 - Abacaxi (5.00) \n 2 - Maca (1.00) \n 3 - Pera (4.00) e a quantidade de unidade da fruta selecionada: ");
        scanf("\n %d %d", &fruta, &qtde);

        switch (fruta) {
            case 1:
                strcpy (nomeFruta, "Abacaxi");
                precoFruta = 5.00;
                totalFruta = qtde * precoFruta;
                totalCompra += totalFruta;
            break;

            case 2:
                strcpy (nomeFruta, "Maca");
                precoFruta = 1.00;
                totalFruta = qtde * precoFruta;
                totalCompra += totalFruta;
            break;

            case 3:
                strcpy (nomeFruta, "Pera");
                precoFruta = 4.00;
                totalFruta = qtde * precoFruta;
                totalCompra += totalFruta;
            break;

            default:
            strcpy (nomeFruta, "Fruta invalida");
            totalFruta = qtde * 0;
            totalCompra += totalFruta;
            break;
        }

        printf("Fruta adicionada");

        printf("\n Deseja adicionar mais frutas? 1 - Sim e 2 - Nao: ");
        scanf("\n %d", &opcao);

    } while (opcao != 2);

    printf("Total da compra %2.f reais", totalCompra);

}