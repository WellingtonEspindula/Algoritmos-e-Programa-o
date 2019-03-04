#include <stdio.h>

int menor2(); //prototipo
int menor3(); //prototipo

int main(){
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;

    printf("Entre os tres numeros inteiros: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    printf("O menor número entre os três é: %d", menor3(x1, x2, x3));

    return 0;
}

int menor2(x1, x2){
    if (x1 < x2){
        return x1;
    } else{
        return x2;
    }
}

int menor3(x1, x2, x3){
    if (menor2(x1, x2) < menor2(x2, x3)){
        menor2(x1, x2);
    } else{
        menor2(x2, x3);
    }
}
