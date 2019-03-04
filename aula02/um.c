/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Este programa  uma simulacao de conta bancaria.
Assim, atraves da leitura de opcoes,
ele deposita e saca valores do saldo inicial.

*/

#include <stdio.h>

int main(){
    // Declaracao de variaveis
    float saldo;
    int op;
    float aux;

    printf("Informe o saldo inicial da conta: ");
    scanf("%f", &saldo);

    printf("Qual operação você deseja realizar? ");
    scanf("%d", &op);

    //Verifica o valor da variável auxiliar, que indica a operacao do serivco a ser prestado
    switch (op)
    {
    case 0:
        printf("\nQual valor você deseja sacar? ");
        scanf("%f", &aux);
        saldo -= aux;

        //Exibe saldo
        printf("Saldo final: %.2f reais. ", saldo);
        if (saldo < 0) {
            printf("Cuidado, saldo negativo!!");
        }

        break;

    case 1:
        printf("\nQual valor você deseja depositar? ");
        scanf("%f", &aux);
        saldo += aux;

        //Exibe saldo
        printf("Saldo final: %.2f reais. ", saldo);
        if (saldo < 0) {
            printf("Cuidado, saldo negativo!!");
        }

        break;

    default:
        printf("Essa opção não existe!!");
        break;
    }
    return 0;
}
