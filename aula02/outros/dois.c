/* Wellington Espindula - wmespindula@inf.ufrgs.br */

#include <stdio.h>

int main(){
    float saldo;
    float aux;

    printf("Entre o saldo inicial (em reais): ");
    scanf("%f", &saldo);

    printf("\nEntre o valor da primeira operacao (em reais): ");
    scanf("%f", &aux);
    saldo += aux;
    printf("O saldo parcial eh de %.2f reais. ", saldo);
    if (saldo < 0) {
        printf("Cuidado, saldo negativo!!");
    }

    printf("\nEntre o valor da segunda operacao (em reais): ");
    scanf("%f", &aux);
    saldo += aux;
    printf("O saldo parcial eh de %.2f reais. ", saldo);
    if (saldo < 0) {
        printf("Cuidado, saldo negativo!!");
    }

    printf("\nEntre o valor da terceira operacao (em reais): ");
    scanf("%f", &aux);
    saldo += aux;
    printf("O saldo parcial eh de %.2f reais. ", saldo);
    if (saldo < 0) {
        printf("Cuidado, saldo negativo!!");
    }

    return 0;
}
