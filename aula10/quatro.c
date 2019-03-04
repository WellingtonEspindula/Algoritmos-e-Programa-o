#include <stdio.h>

#define M 5

void desloca(int *v1, int *v2, int d);

int main(){
    int v1[M];
    int v2[M];

    int d = 0;

    for (int i = 0; i < M; i++){
        printf("Informe o número %d: ", (i+1));
        scanf("%d", &v1[i]);
    }

    printf("Informe o quanto o vetor devera ser deslocado: ");
    scanf("%d", &d);

    desloca(&v1, &v2, d);

    printf("\n");
    for (int i = 0; i < M; i++){
        printf("%d ", v2[i]);
    }

    return 0;
}

void desloca(int *v1, int *v2, int d){
    int deslocamento = d%M;

    for (int i = 0; i < M; i++){
        int aux = i + deslocamento;
        if ( aux > (M-1)){
            aux -= M;
        }
        v2[aux] = v1[i];
    }
}
