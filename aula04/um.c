/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Entrada:
    repeticoes (Valor inteiro positivo que representa o número de repetições)
    aux (variavel auxiliar que armazena durante o valor da entrada na respectiva posição da repetição

Funcionamento:
    Durante um laço de repetição, o programa lê valores e incrementa em uma variável soma.
    Apos, calcula a média, e retorna os valores calculados.

Saída:
    Soma (soma dos valores)
    Media (média dos valores)

*/

#include <stdio.h>

int main(){

    int repeticoes;
    float soma = 0;

    printf("Informe a quantidade de valores considerados: ");
    scanf("%d", &repeticoes);

    for (int i = 1; i <= repeticoes; i++){
        printf("Informe o valor %d: ", i);
        float aux = 0;
        scanf("%f", &aux);
        soma += aux;
    }

    printf("\nSoma dos valores: %.3f", soma);
    printf("\nMédia dos valores: %.3f", (soma/repeticoes));

    return 0;
}
