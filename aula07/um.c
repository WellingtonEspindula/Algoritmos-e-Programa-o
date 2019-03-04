/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

*/

#include <stdio.h>
#include <math.h>

#define N 3

int main(){
    int coordenadasInicial[2];
    int coordenadasComp[2][N];

    float menorDistancia = 0;

    printf("Informe a coordenada x do ponto de interesse: ");
    scanf("%d", &coordenadasInicial[0]);
    printf("Informe a coordenada y do ponto de interesse: ");
    scanf("%d", &coordenadasInicial[1]);

    // Armazena os dados das coordenadas a serem comparadas com as iniciais
    for (int i = 0; i < N; i++){
        printf("\n");
        printf("Informe a coordenada x do ponto %d: ", (i+1));
        scanf("%d", &coordenadasComp[0][i]);
        printf("Informe a coordenada y do ponto %d: ", (i+1));
        scanf("%d", &coordenadasComp[1][i]);
    }

    for (int i = 0; i < N; i++){
        //Bloco de variaveis de uso local para tornan o codigo mais legivel
        //Valores de x final e inicial
        double xf = coordenadasComp[0][i];
        double xi = coordenadasInicial[0];
        //Valores de y final e inicial
        double yf = coordenadasComp[1][i];
        double yi = coordenadasInicial[1];

        //Calculo de distancia entre os pontos cartezianos
        double distanciaPontos = sqrt( (pow((xf-xi), 2) + pow((yf-yi), 2)) );

        //Verifica se a distancia calculada é menor do que a ja armazenada
        // ou se for a primeira instancia do laco, inicializa
        // o valor da variavel de menor distancia com o valor da distancia dos
        // pontos do primeiro item do array com os valores de comparacao
        if ((distanciaPontos < menorDistancia) || (i == 0)){
            menorDistancia = distanciaPontos;
        }
    }

    printf("\n");
    printf("A menor distancia encontrada eh %.2f", menorDistancia);
    return 0;
}
