#include <stdio.h>

#define M 5

void maiores(int *v1, int *v2, int n);

int main(){
    int v1[M];
    int v2[M];

    for (int i = 0; i < M; i++){
        printf("Informe o número %d: ", (i+1));
        scanf("%d", &v1[i]);
    }

    maiores(v1, v2, M);

    printf("\nMaiores: \n");
    for (int i = 0; i < M; i++){
        printf("%d ", v2[i]);
    }

    return 0;
}

void maiores(int *v1, int *v2, int n){
    for (int i = 0; i < n; i++){
        int count = 0;
        int valorReferencia = v1[i];

        for (int j = 0; j < n; j++){
            if (v1[j] > valorReferencia){
                count++;
            }
        }

        v2[i] = count;
    }
}
