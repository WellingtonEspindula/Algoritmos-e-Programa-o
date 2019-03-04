/* Wellington Espindula - wmespindula@inf.ufrgs.br */

#include <stdio.h>

int main(){
    float valor[3];
    float valorR1[2];
    float valorR2[1];
    float vetorCrescente[3];
    float menorValor = 0;

    printf("Entre os três alturas: ");
    scanf("%f %f %f", &valor[0], &valor[1], &valor[2]);

//    printf("Teste: ");
//    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
//        printf("%f ", valor[i]);
//    }

    menorValor = valor[0];
    //  Calcula a soma do array, procura o maior e o menor valor
    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        if (valor[i] < menorValor){
            menorValor = valor[i];
        }
    }
    vetorCrescente[0] = menorValor;

    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        if (valor[i] != menorValor){
            valorR1[i] = valor[i];
        }
    }

    //Limpa
    menorValor = 0;
    printf("Teste: ");
    for(int i = 0; i < (sizeof(valorR1)/sizeof(int)); i ++){
        printf("%f ", valorR1[i]);
    }


    menorValor = valorR1[0];
    //  Calcula a soma do array, procura o maior e o menor valor
    for(int i = 0; i < (sizeof(valorR1)/sizeof(int)); i ++){
        if (valorR1[i] < menorValor){
            menorValor = valorR1[i];
        }
    }
    vetorCrescente[1] = menorValor;

    for(int i = 0; i < (sizeof(valorR1)/sizeof(int)); i ++){
        if (valorR1[i] != menorValor){
            valorR2[i] = valorR1[i];
        }
    }
    vetorCrescente[3] = valorR2[0];

    printf("Alturas em ordem: ");
    for(int i = 0; i < (sizeof(valor)/sizeof(int)); i ++){
        printf("%f ", vetorCrescente[i]);
    }

    return 0;
}

float* recursiva(float vector[3]){

}
