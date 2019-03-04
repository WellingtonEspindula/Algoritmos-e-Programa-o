/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Esse programa lê três números inteiros, e informa quantos são maiores ou iguais à média
*/

#include <stdio.h>

int main(){
    int valor[3];
    int soma = 0;
    float media;
    int count;

    printf("Entre os três valores inteiros: ");
    scanf("%d %d %d", &valor[0], &valor[1], &valor[2]);

    //  Calcula a soma do array, procura o maior e o menor valor
    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        soma += valor[i];
    }
    // Calcula a média a partir da soma do array e do tamanho do array
    media = ((float)soma)/(sizeof(valor)/sizeof(int));

    // Itera o vetor de valores e verifica quais valores são iguais ou excedem à média, e incrementa 1 no contador
    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        if (valor[i] >= media){
            count++;
        }
    }

    // Imprime o número encontrado de valores iguais ou maiores que a média armazenado na variável de contagem
    printf("Valores maiores ou iguais a media: %d", count);

    return 0;
}
