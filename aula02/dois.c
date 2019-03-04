/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Esse programa, a partir da leitura dos codigos e populacao de tres municipios,
calcula a media da populacao e informa quais dos informados sao maiores e
menores que a media

*/

#include <stdio.h>

int main(){
    int cod[3];
    int populacao[3];
    int soma = 0;
    float media;
    int maiores[3], menores[3];

    printf("Informe o identificador e a população do primeiro município: ");
    scanf("%d %d", &cod[0], &populacao[0]);

    printf("Informe o identificador e a população do segundo município: ");
    scanf("%d %d", &cod[1], &populacao[1]);

    printf("Informe o identificador e a população do terceiro município: ");
    scanf("%d %d", &cod[2], &populacao[2]);

    //  Calcula a soma do array
    for(int i = 0; i < (sizeof(populacao)/sizeof(int)); i ++){
        soma += populacao[i];
    }

    // Calcula a média a partir da soma do array e do tamanho do array
    media = ((float)soma)/(sizeof(populacao)/sizeof(int));
    printf("A média da população é: %f", media);

    printf("\nMunicípios com população maior ou igual à média: ");
    //  Procura os municípios com valores maiores ou iguais às medias e os exibe
    for(int i = 0; i < (sizeof(populacao)/sizeof(int)); i ++){
        if (populacao[i] >= media){
            printf("%d ", cod[i]);
        }
    }

    printf("\nMunicípios com população maior ou igual à média: ");
    //  Procura os municípios com valores menores às medias e os exibe
    for(int i = 0; i < (sizeof(populacao)/sizeof(int)); i ++){
        if (populacao[i] < media){
            printf("%d ", cod[i]);
        }
    }

    return 0;
}
