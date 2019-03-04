#include <stdio.h>

#define M 5

void maximoMinimo(int *v, int n, int *maximo, int *minimo);

int main(){
    int v[M];
    int maximo = 0;
    int minimo = 0;

    for (int i = 0; i < M; i++){
        printf("Informe o número %d: ", (i+1));
        scanf("%d", &v[i]);
    }

    maximoMinimo(&v, M, &maximo, &minimo);

    printf("\nMáximo: %d \nMinimo: %d", maximo, minimo);

    return 0;
}

void maximoMinimo(int *v, int n, int *maximo, int *minimo){
    int maximoLocal = v[0];
    int minimoLocal = v[0];

    for (int i = 0; i < n; i++){
        if (v[i] > maximoLocal){
            maximoLocal = v[i];
        }
        if ( v[i] < minimoLocal ){
            minimoLocal = v[i];
        }
    }

    *maximo = maximoLocal;
    *minimo = minimoLocal;
}
