/*

    Descrição: Esse programa soma os dígitos de um número inteiro utilizando um método recursivo.
    Autor: Wellington Espindula (wmespindula@inf.ufrgs.br)

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaDigitos(int num);

int main()
{
    int num = 0;

    printf("Entre um numero inteiro positivo: ");
    scanf("%d", &num);

    int resultado = 0;
    resultado = somaDigitos(num);
    if (resultado == -1){
        printf("Numero nao aceito");
        return 1;
    } else{
        printf("A soma dos digitos do numero %d eh %d", num, resultado);
        return 0;
    }
}

int somaDigitos(int num){
    static int soma;
    if (num < 0){
        return -1;
    } else if (num == 0){
        return soma;
    } else {
        soma += num % 10;
        num /= 10;
        somaDigitos(num);
    }
}

