/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

    Esse programa lê uma sequencia de numeros e verifica se esta forma um palíndromo

*/

#include <stdio.h>
#include <stdbool.h>

#define NUM_DIGITOS 5

int main(){
    int array[NUM_DIGITOS];

    for (int i = 0; i < NUM_DIGITOS; i++){
        printf("Informe um digito: ");
        scanf("%d", &array[i]);
    }

    bool isPalindromo = true;
    for (int i = 0; i < round(NUM_DIGITOS/2); i++){
        if ( array[i] != array[NUM_DIGITOS-1-i] ){
            isPalindromo = false;
        }
    }

    if (isPalindromo){
        printf("É palíndromo");
    } else {
        printf("Não é palíndromo");
    }


    return 0;
}
