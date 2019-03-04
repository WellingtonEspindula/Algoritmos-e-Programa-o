
#include <stdio.h>

#define NUM_DIGITOS 5


int main(){

    int array[NUM_DIGITOS];

    // Inicia o array com valores do usuario
    for (int i = 0; i < NUM_DIGITOS; i++){
        printf("Informe o valor %d: ", (i+1));
        scanf("%d", &array[i]);
    }

    printf("\n");
    // Copia Array
    int arrayCp[NUM_DIGITOS];
    for (int i = 0; i < NUM_DIGITOS; i++){
        arrayCp[i] = array[i];
    }

    for (int i = 0; i < NUM_DIGITOS; i++){
        int menor = arrayCp[i];
        int posicao = i;
        for (int j = (i+1); j < NUM_DIGITOS; j++){
            if (arrayCp[j] < menor){
                menor = arrayCp[j];
                posicao = j;
            }
        }
        int aux = arrayCp[i];
        arrayCp[i] = arrayCp[posicao];
        arrayCp[posicao] = aux;
    }

    printf("\n");
    printf("Arranjo ordenado: ");
    for (int i = 0; i < NUM_DIGITOS; i++){
        printf("%d ", arrayCp[i]);
    }

    return 0;
}
