/* Wellington Espindula - wmespindula@inf.ufrgs.br */

#include <stdio.h>

int main(){
    int codigo[3];
    int precipitacao[3];

    printf("Entre os códigos dos três municípios: ");
    scanf("%d %d %d", &codigo[0], &codigo[1], &codigo[2]);
    printf("Entre a precipitação (em mm) dos três municípios: ");
    scanf("%d %d %d", &precipitacao[0], &precipitacao[1], &precipitacao[2]);
    float precipitacaoMedia = ((float) precipitacao[0] + (float) precipitacao[1] + (float) precipitacao[2])/3;
    printf("A precipitação média nos três municípios foi de %.2f mm\n", precipitacaoMedia);


    for (int i = 0; i < (sizeof(precipitacao))/(sizeof(int)); i++){
        if (precipitacao[i] > 105){
            printf("O município de código %d teve precipitação mensal superior ao valor esperado\n", codigo[i]);
            if (precipitacao[i] > 210) {
                printf("O município de código %d teve precipitação muito alta\n", codigo[i]);
            }
        } else {
            printf("O município de código %d teve precipitação inferior superior ao valor esperado\n", codigo[i]);
        }
    }
    return 0;
}
