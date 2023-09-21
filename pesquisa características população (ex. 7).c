#include<stdio.h>
#include<string.h>

main(){

    char olhos, cabelos, sexo;
    int contadorGeral = 0, contadorMasc = 0, contadorFem = 0, contadorEspecif = 0, idade = 0;
    float salario, porcentagemCaracterEspecif;

    do {
        contadorGeral++;

        do {
            fflush(stdin);
            printf("\n Digite o sexo: (m ou f) ");
            scanf("%c", &sexo);

            if (sexo == 'm') {
                contadorMasc++;
            } else if (sexo == 'f') {
                contadorFem++;
            }

            if (sexo != 'm' && sexo != 'f') {
                printf("Opcao invalida \n");
            }

        } while (sexo != 'm' && sexo != 's');

        do {

            fflush(stdin);
            printf("\n Digite a cor dos olhos: (c - castanho / p - preto / v - verde / a - azuis) ");
            scanf("%c", &olhos);

            if (olhos != 'p' && olhos != 'v' && olhos != 'a' && olhos != 'c') {
                printf("Opcao invalida \n");
            }

        
        } while (olhos != 'p' && olhos != 'v' && olhos != 'a' && olhos != 'c');

        do {
            
            fflush(stdin);
            printf("\n Digite a cor dos cabelos: (l - loiros / c - castanhos / p - pretos / r - ruivos) ");
            scanf("%c", &cabelos);

            if (cabelos != 'p' && cabelos != 'r' && cabelos != 'l' && cabelos != 'c') {
                printf("Opcao invalida \n");
            }

        } while (cabelos != 'p' && cabelos != 'r' && cabelos != 'l' && cabelos != 'c');

        do {

            fflush(stdin);
            printf("\n Digite o seu salario: ");
            scanf("%f", &salario);

            if (salario < 0) {
                printf("Opcao invalida \n");
            }

        } while (salario < 0);

        do {

            printf("\n Dgite a idade: ");
            scanf("%d", &idade);
            if(idade < 10 && idade > 100) {
                printf("Numero invalido \n");
            }

        } while (idade < 10 && idade > 100);

        if  (sexo == 'f' && olhos == 'c' && cabelos == 'p' && (idade > 15 && idade < 35)) {
            contadorEspecif++;
        }

        printf("Deseja cadastrar um novo habitante? 1 - Sim e 2 - Nao");
        scanf("\n &d", &idade);

    } while (idade != -1);

    porcentagemCaracterEspecif = contadorEspecif / contadorGeral * 100;

    printf("\n Total geral: %d", contadorGeral);
    printf("\n Total homens: %d", contadorMasc);
    printf("\n Total mulheres: %d", contadorFem);
    printf("\n Total caracteristicas especificas: %d", contadorEspecif);
    printf("\n Porcentagem de caracteristicas especificas: %f", porcentagemCaracterEspecif);

}