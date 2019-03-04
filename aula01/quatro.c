#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%d", &a);

    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%d", &b);

    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%d", &c);

    if ( ((abs((b-c) < a)) && (abs((b-c) < (b+c))) && (a < (b+c))) &&
         ((abs((a-c) < b)) && (abs((a-c) < (a+c))) && (b < (a+c))) &&
         ((abs((a-b) < c)) && (abs((a-b) < (a+b))) && (c < (a+b)))
        ){
            if ((a == b) && (a == c) && (b == c)){
                printf("O triângulo é equilátero");
            } else if ((a == b) || (a == c) || (b == c))
                printf("O triângulo é isóceles");
            else{
                printf("O triângulo é escaleno");
            }
        } else{
            printf("Esse triângulo não existe");
        }

    return 0;
}
