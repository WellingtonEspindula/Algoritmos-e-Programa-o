#include <stdio.h>
#include <stdlib.h>

#define LIMITE_X 27
#define LIMITE_Y 11

#define RATO 'M'
#define PORTA 'T'
#define GATO 'G'
#define OSSO 'O'
#define PAREDE 'X'
#define QUEIJO 'Q'

typedef struct tipo_posicao {
    int linha;
    int coluna;
} POSICAO;

/* PROTOTIPOS */
int leMapa(FILE *arquivo, char mapa[LIMITE_X][LIMITE_Y], POSICAO *pRato);
int atualizaMapa(char mapa[LIMITE_X][LIMITE_Y], POSICAO pRato, char direcao);
void imprimeMapa(char mapa[LIMITE_X][LIMITE_Y]);

int main()
{
    char nomeArq[30];
    char mapa[LIMITE_X][LIMITE_Y];
    FILE *arquivo;
    POSICAO pRato;
    char dir;

    printf("Digite o nome do arquivo:\n");
    gets(&nomeArq);
    arquivo = fopen(nomeArq, "r");
    printf("Direcao:\n");
    scanf("%c", &dir);
    dir = toupper(dir);

    if (leMapa(arquivo, mapa, &pRato) == 1){
        if (atualizaMapa(mapa, pRato, dir) == 1){
            printf("\nMovimento realizado");
            system("CLS");
            imprimeMapa(mapa);
        } else {
            printf("\nNao foi possivel realizar o movimento");
        }
    } else {
        printf("Ocorreu um erro ao ler o arquivo");
        return 1;
    }
    return 0;
}

int leMapa(FILE *arquivo, char mapa[LIMITE_X][LIMITE_Y], POSICAO *pRato){
    if (arquivo == NULL){
        return 0;
    } else{
        for (int j = 0; j < LIMITE_Y; j++){
                for (int i = 0; i <= LIMITE_X; i++){
                    char c = (char) fgetc(arquivo);
                    if (c == RATO){
                        pRato->coluna = i;
                        pRato->linha = j;
                    }
                    if (c != '\n'){
                        mapa[i][j] = c;
                    }
                }
            }
        fclose(arquivo);
        return 1;
    }
}

int atualizaMapa(char mapa[LIMITE_X][LIMITE_Y], POSICAO pRato, char direcao){
    POSICAO novaP;
    switch(direcao){
    case 'A':
        novaP.coluna = pRato.coluna - 1;
        novaP.linha = pRato.linha;
        break;
    case 'D':
        novaP.coluna = pRato.coluna + 1;
        novaP.linha = pRato.linha;
        break;
    case 'S':
        novaP.linha = pRato.linha + 1;
        novaP.coluna = pRato.coluna;
        break;
    case 'W':
        novaP.coluna = pRato.coluna;
        novaP.linha = pRato.linha - 1;
        break;
    default:
        printf("Comando desconhecido");
    }

    if (mapa[novaP.linha][novaP.coluna] == PAREDE){
        return 0;
    } else {
        mapa[pRato.linha][pRato.coluna] = ' ';
        mapa[novaP.linha][novaP.coluna] = 'M';
        return 1;
    }
}

void imprimeMapa(char mapa[LIMITE_X][LIMITE_Y]){
    for (int j = 0; j < LIMITE_Y; j++){
        for (int i = 0; i < LIMITE_X; i++){
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
}
