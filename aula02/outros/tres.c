/* Wellington Espindula - wmespindula@inf.ufrgs.br */

#include <stdio.h>

int main(){
    int valor[4];
    int soma = 0;
    int maiorValor, menorValor;

    printf("Entre os quatro valores inteiros: ");
    scanf("%d %d %d %d", &valor[0], &valor[1], &valor[2], &valor[3]);


    //  Calcula a soma do array, procura o maior e o menor valor
    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        soma += valor[i];
        if (valor[i] > maiorValor){
            maiorValor = valor[i];
        }
        if (valor[i] < menorValor){
            menorValor = valor[i];
        }
    }

    float media = ((float)soma)/(sizeof(valor)/sizeof(int)); // Calcula a média a partir da soma do array e do tamanho do array

    printf("Valor medio: %f\nMenor valor: %d\nMaior valor: %d", media, menorValor, maiorValor); // Imprime os resultados

    return 0;
}
