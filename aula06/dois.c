/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

    Esse programa inicia uma lista com números aleatórios,
        a partir da entrada de um número pelo usuário,
    verifica qual número da lista eh o mais distante do digitado

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_VALORES 10

int main(){
    float randArranjo[NUM_VALORES];

    // Incia o vetor com valores aleatorios
    for (int i = 0; i < NUM_VALORES; i++){
        randArranjo[i] = ((( (float) rand() )/RAND_MAX) * 100);
    }

    // Mostra o arranjo
    printf("Valores aleatórios do arranjo: ");
    for (int i = 0; i < NUM_VALORES; i++){
        printf("%.1f ", randArranjo[i]);
    }

    printf("\n");

    float valorTeste = 0;
    printf("Informe o valor teste: ");
    scanf("%f", &valorTeste);

    // Inicaliza a variavel do numero mias distante
    float numMaisDist = randArranjo[0];
    // Cria um laco de repeticao para buscar o num mais distante
    for (int i = 0; i < NUM_VALORES; i++){
            //Verifica se o numero do array na posicao i é masis distante do ja guardado
        if ((fabs((randArranjo[i]-valorTeste))) > (fabs((numMaisDist-valorTeste)))){
                numMaisDist = randArranjo[i];
        }
    }

    printf("\nO valor mais distante eh %.1f", numMaisDist);

    return 0;
}

