/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

    Esse programa lê uma lista de numeros reais, e imprime os valores,
    depois informar qual é a média dos valores lidos e, em seguida,
    quais são os valores menores ou iguais que a média e
    quais são os valores maiores que a média

*/

#include <stdio.h>

#define N 5

int main(){
    float arranjo[N];

    printf("Arranjo: ");
    for (int i = 0; i < N; i++){
        scanf("%f", &arranjo[i]);
    }

    float soma = 0;
    for (int i = 0; i < N; i++){
        soma += arranjo[i];
    }
    float media = soma/N;

    printf("A média é %.2f", media);

    printf("\n");
    printf("Os valores menores ou iguais a média são: ");
    for (int i = 0; i < N; i++){
        if (arranjo[i] <= media){
            printf("%.2f ", arranjo[i]);
        }
    }

    printf("\n");
    printf("Os valores maiores que a média são: ");
    for (int i = 0; i < N; i++){
        if (arranjo[i] > media){
            printf("%.2f ", arranjo[i]);
        }
    }


    return 0;
}

