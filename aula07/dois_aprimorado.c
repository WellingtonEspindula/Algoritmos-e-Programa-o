/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

*/
#include <stdio.h>

#define L 3
#define P 4

int main(){
    int produtos[P];
    int produtosVendidosLoja[P][L];

    popularProdutos(&produtos);
    popularProdutosLojas(&produtos, &produtosVendidosLoja);

    printf("\n");
    int produtoDesejado = 0;
    printf("Informe o código do produto desejado: ");
    scanf("%d", &produtoDesejado);
    int posicaoProdDesejado = pesquisaPosicaoProduto(produtos, produtoDesejado);

    if (posicaoProdDesejado == -1){
        printf("Código de produto inválido");
    } else {
        printf("Total vendido do produto %d: %d", produtoDesejado, retornaSomaDosProdutos(posicaoProdDesejado, produtosVendidosLoja));
    }

    return 0;
}

void popularProdutos(int *produtos[P]){
    for (int i = 0; i < P; i++){
        printf("Informe o código do produto: ");
        scanf("%d", &produtos[i]);
    }
}

void popularProdutosLojas(int *produtos[P], int *produtosVendidosLoja[P][L]){
  for (int i = 0; i < L; i++){
        printf("\n");
        for (int j = 0; j < P; j++){
            printf("Informe a quantidade vendida do produto %d na loja %d: ", produtos[j], (i+1) );
            scanf("%d", &produtosVendidosLoja[j][i]);
        }
    }
}

// Dado o codigo do produto, o metodo procura a posicao do produto no array
// Caso o produto nao exista, retorna -1
int pesquisaPosicaoProduto(int produtos[P], int produtoDesejado){
    int posicaoProdDesejado = -1;
    for (int i = 0; i < P; i++){
        if (produtoDesejado == produtos[i]){
            posicaoProdDesejado = i;
        }
    }
    return posicaoProdDesejado;
}

int retornaSomaDosProdutos(int posicaoProdDesejado, int produtosVendidosLoja[P][L]){
    int somaProduto = 0;
    for (int i = 0; i < L; i++){
        somaProduto += produtosVendidosLoja[posicaoProdDesejado][i];
    }
    return somaProduto;
}
