#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero > 0 && (numero%2)==0){
        if ((numero%2)==0){
            printf("O numero eh positivo e par. O n�mero pertence ao grupo A");
        }
        else {
            printf("O numero eh positivo e impar. O n�mero pertence ao grupo C");
        }
    } else {
         if ((numero%2)==0){
            printf("O numero eh negativo e par. O n�mero pertence ao grupo B");
        }
        else {
            printf("O numero eh negativo e impar. O n�mero pertence ao grupo D");
        }
    }

    return 0;
}
