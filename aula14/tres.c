/*

    Descrição: Este programa encontra, utilizando um método recursivo, o número de números pares de um arranjo.
    Autor: Wellington Espindula (wmespindula@inf.ufrgs.br)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

int numeroDePares(int *v, int n);

int main()
{
    int vetor[N];
    int num = 0;

    printf("Suponha o vetor: ");
    for (int i = 0; i < N; i++){
        scanf("%d,", &vetor[i]);
    }

    int numPares = numeroDePares(vetor, N);
    printf("Existem %d numeros pares no vetor", numPares);
}

int numeroDePares(int *v, int n){
    static int posicao = 0;
    static int numPares = 0;
    if (posicao == n){
        return numPares;
    } else{
        if (v[posicao]%2 == 0){
            numPares++;
        }
        posicao++;
        numeroDePares(v, n);
    }
}
