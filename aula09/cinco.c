#include <stdio.h>

int fibonacci(int n); //prototipo

int main(){
    int n = 0;
    printf("Entre o termo final para a sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci para esse número de termos é %d", fibonacci(n));
}

int fibonacci(int n){
    int aux = 0;
    for (int i = 0; i <= n; i++){
        aux += i;
    }
    return aux;
}
