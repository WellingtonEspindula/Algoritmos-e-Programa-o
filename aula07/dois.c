/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

*/
#include <stdio.h>

#define L 3
#define P 4

int main(){
    int produtos[P];
    int produtosVendidosLoja[P][L];

    for (int i = 0; i < P; i++){
        printf("Informe o código do produto: ");
        scanf("%d", &produtos[i]);
    }

    for (int i = 0; i < L; i++){
        printf("\n");
        for (int j = 0; j < P; j++){
            printf("Informe a quantidade vendida do produto %d na loja %d: ", produtos[j], (i+1) );
            scanf("%d", &produtosVendidosLoja[j][i]);
        }
    }

    printf("\n");

    int produtoDesejado = 0;
    int posicaoProdDesejado = -1;
    printf("Informe o código do produto desejado: ");
    scanf("%d", &produtoDesejado);

    for (int i = 0; i < P; i++){
        if (produtoDesejado == produtos[i]){
            posicaoProdDesejado = i;
        }
    }

    if (posicaoProdDesejado == -1){
        printf("Código de produto inválido");
    } else {
        int somaProduto = 0;
        for (int i = 0; i < L; i++){
            somaProduto += produtosVendidosLoja[posicaoProdDesejado][i];
        }
        printf("Total vendido do produto %d: %d", produtoDesejado, somaProduto);
    }

    return 0;
}

