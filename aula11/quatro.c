#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_GATOS 4

#define ESQUERDA -1
#define PARADO 0
#define DIREITA 1

typedef struct {
    int x;
    int y;
} POSICAO;

typedef struct {
    int x;
    int y;
} DIRECAO;

typedef struct {
    POSICAO posicao;
    DIRECAO direcao;
} GATO;

// prototipo das funcoes
void setDirecao(DIRECAO *direcao, int x, int y);
int moveGato(GATO *gato, POSICAO pInicial, POSICAO pFinal);
GATO criaGato();

int main(){
    POSICAO posicaoInicial = {1, 1};
    POSICAO posicaoFinal = {27, 11};




//    GATO gatinhoTeste;
//    POSICAO posicaoGatinho;
//    DIRECAO direcaoGatinho;

//    printf("Informe as coordenadas x e y da posicao do gato: ");
//    scanf("%d %d", &(posicaoGatinho.x), &(posicaoGatinho.y));
//
//    printf("Informe os deslocamentos do gato em x e y: ");
//    int direcaoX, direcaoY;
//    scanf("%d %d", &direcaoX, &direcaoY);
//
//    setDirecao(&direcaoGatinho, direcaoX, direcaoY);
//    gatinhoTeste.posicao = posicaoGatinho;
//    gatinhoTeste.direcao = direcaoGatinho;
//
//    printf("Informe a quantidade de iteracoes: ");
//    int iteracoes = 0;
//    scanf("%d", &iteracoes);
//
//    printf("Gato se movendo... \n");
//    for (int i = 0; i < iteracoes; i++){
//        int result = moveGato(&gatinhoTeste, posicaoInicial, posicaoFinal);
//        if (result == 1){
//            printf("\nPosicao do gato depois do passo %d: (%d,%d)", (i+1), gatinhoTeste.posicao.x, gatinhoTeste.posicao.y);
//        } else{
//            printf("Gato realizou uma colisao intelastica com a parede do labirinto \nGame Over!! :(");
//            return 1;
//        }
//    }

    return 0;
}

void setDirecao(DIRECAO *direcao, int x, int y){
    if ( (x >= -1) && (x <= 1) ){
        direcao->x = x;
    } else {
        direcao->x = 0;
    }
    if ( (y >= -1) && (y <= 1) ){
        direcao->y = y;
    } else {
        direcao->y = 0;
    }
}

int moveGato(GATO *gato, POSICAO pInicial, POSICAO pFinal){
    int xFinal = (gato->direcao.x) + (gato->posicao.x);
    int yFinal = (gato->direcao.y) + (gato->posicao.y);

    if ( ((xFinal >= pInicial.x) && (xFinal <= pFinal.x)) &&
         ((yFinal >= pInicial.y) && (yFinal <= pFinal.y)) ){
            gato->posicao.x = xFinal;
            gato->posicao.y = yFinal;
            return 1;
    } else {
        return 0;
    }
}

GATO criaGato(POSICAO pInicial, POSICAO pFinal){
    srand(time(0));

    pX =

}
