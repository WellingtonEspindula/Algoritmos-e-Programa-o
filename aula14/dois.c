/*

    Descrição: Este programa encontra, utilizando um método recursivo, a posição de um número em um arranjo.
    Autor: Wellington Espindula (wmespindula@inf.ufrgs.br)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

int encontraNumero(int *v, int n, int x);

int main()
{
    int vetor[5];
    int num = 0;

    printf("Suponha o vetor: ");
    for (int i = 0; i < N; i++){
        scanf("%d,", &vetor[i]);
    }

    printf("Informe o numero buscado: ");
    scanf("%d", &num);
    int posicaoNumero = encontraNumero(vetor, N, num);
    if (posicaoNumero == -1){
        printf("Numero nao foi encontrado");
    } else {
        printf("O numero esta na posicao %d.", posicaoNumero);
    }
}

int encontraNumero(int *v, int n, int x){
    static int posicao = 0;
    if (posicao == n){
        return -1;
    } else {
        if (v[posicao] == x){
            return posicao;
        } else{
            posicao++;
            encontraNumero(v, n, x);
        }
    }
}
