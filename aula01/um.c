#include <stdio.h>
#include <math.h>

int main(){
    float montante, rendimento;
    int meses;

    printf("Entre o valor inicial (em reais): ");
    scanf("%f", &montante);

    printf("Entre o rendimento mensal (percentual): ");
    scanf("%f", &rendimento);

    printf("Entre o número de meses da aplicação: ");
    scanf("%d", &meses);

    double resultado = montante*(pow(1+(rendimento/100), meses));
    printf("Durante %d meses, o seu capital será R$ %.2f", meses, resultado);
    return 0;
}
