#include <stdio.h>

#define FALSE 0
#define TRUE 1

int isPrime(int num);

int main(){
    int numero = 0;

    printf("Entre o número: ");
    scanf("%d", &numero);

    if (isPrime(numero) == 1){
        printf("O número é primo");
    } else {
        printf("Achou errado, otário!");
    }

    return 0;
}

int isPrime(int num){
    int aux = TRUE;

    for (int i = 2; i < num; i++){
        if (num%i == 0){
            aux = FALSE;
        }
    }

    return aux;
}
