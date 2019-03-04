#include <stdio.h>
#include <string.h>

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

typedef struct{
    POSICAO posicao;
} RATO;

typedef struct {
    RATO rato;
    GATO gatos[N_GATOS];
    int nivel;
    int numVidas;
    int pontuacao;
} ESTADO;


// prototipo das funcoes
int salvaEstado(char *nomeArquivo, ESTADO estadoEscrita);
int leEstado(char *nomeArquivo, ESTADO *estadoLeitura);


int main(){
    printf("1-Salva estado e 2-Carrega estado\n");
    int op = 0;
    scanf("%d", &op);

    if (op == 1){
        RATO rato1 = { {3, 4} };
        GATO gato1 = { {5, 4}, {1, 0} };
        GATO gato2 = { {7, 8}, {0, 1} };
        GATO gato3 = { {8, 8}, {0, 0} };
        GATO gato4 = { {12, 11}, {1, 1} };
        GATO gataiada[N_GATOS];
        int nivel = 1;
        int numVidas = 5;
        int pontuacao = 50;

        //popula estadoEscrita
        ESTADO estadoEscrita;
        estadoEscrita.rato = rato1;
        estadoEscrita.gatos[0] = gato1;
        estadoEscrita.gatos[1] = gato2;
        estadoEscrita.gatos[2] = gato3;
        estadoEscrita.gatos[3] = gato4;
        estadoEscrita.nivel = nivel;
        estadoEscrita.numVidas = numVidas;
        estadoEscrita.pontuacao = pontuacao;

        puts("Digite o nome do arquivo:");
        char arquivo[20];
        scanf("%s", arquivo);
        int resultado = salvaEstado(arquivo, estadoEscrita);
        if (resultado == 1){
            printf("\nEstado salvo com sucesso!!");
        } else {
            printf("\nOcorreu um erro ao salvar o arquivo");
        }
    }
    if (op == 2){
        ESTADO estadoLeitura;

        puts("Digite o nome do arquivo:");
        char arquivo[20];
        scanf("%s", arquivo);
        int resultado = leEstado(arquivo, &estadoLeitura);
        if (resultado == 1){
            printf("\n------ RATO -----");
            printf("\nPosicao: (%d, %d)", estadoLeitura.rato.posicao.x, estadoLeitura.rato.posicao.y);
            printf("\n");

            printf("\n------ GATOS -----");
            for (int i = 0; i < N_GATOS; i++){
                printf("\n------ GATO %d -----", i);
                printf("\nPosicao: (%d, %d)", estadoLeitura.gatos[i].posicao.x, estadoLeitura.gatos[i].posicao.y);
                printf("\nDirecao: (%d, %d)", estadoLeitura.gatos[i].direcao.x, estadoLeitura.gatos[i].direcao.y);
                printf("\n");
            }

            printf("\nNIVEL: %d", estadoLeitura.nivel);
            printf("\nNUMERO DE VIDAS: %d", estadoLeitura.numVidas);
            printf("\nPONTUACAO: %d", estadoLeitura.pontuacao);

            printf("\n");
        } else {
            printf("\nOcorreu um erro ao ler o arquivo");
        }
    }

    return 0;
}


int salvaEstado(char *nomeArquivo, ESTADO estadoEscrita){
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "wb");
    if (arquivo){
            int resultado = fwrite(&estadoEscrita, sizeof(ESTADO), 1, arquivo);
            fclose(arquivo);
            return resultado;
    } else {
        return 0;
    }
}

int leEstado(char *nomeArquivo, ESTADO *estadoLeitura){
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "rb");
    if (arquivo){
            int resultado = fread(estadoLeitura, sizeof(ESTADO), 1, arquivo);
            fclose(arquivo);
            return resultado;
    } else {
        return 0;
    }
}
