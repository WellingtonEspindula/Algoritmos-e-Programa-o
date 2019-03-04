/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Entrada:
    Dois valores inteiros (var1, var2)

Funcionamento:
    Durante um laço de repetição, o programa verifica os números que são pares dentro do intervalo do número menor e maior e incrementa em uma variável soma.
    Por fim, imprime o valor calculado (soma).

Saída:
    Soma dos números pares no intervalo dos números digitados

*/

#include <stdio.h>

int main(){
    int var1, var2;
    int maior, menor;
    int soma = 0;

    printf("Entre com dois valores: ");
    scanf("%d %d", &var1, &var2);

    if (var1 > var2){
        maior = var1;
        menor = var2;

    }
    else{
        maior = var2;
        menor = var1;
    }

    for (int i = menor; i <= maior; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }

    printf("Soma dos valores pares entre estes dois numeros: %d", soma);

    return 0;
}
