#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Digite o valor do primeiro lado do tri�ngulo: ");
    scanf("%d", &a);

    printf("Digite o valor do segundo lado do tri�ngulo: ");
    scanf("%d", &b);

    printf("Digite o valor do terceiro lado do tri�ngulo: ");
    scanf("%d", &c);

    if ( ((abs((b-c) < a)) && (abs((b-c) < (b+c))) && (a < (b+c))) &&
         ((abs((a-c) < b)) && (abs((a-c) < (a+c))) && (b < (a+c))) &&
         ((abs((a-b) < c)) && (abs((a-b) < (a+b))) && (c < (a+b)))
        ){
            if ((a == b) && (a == c) && (b == c)){
                printf("O tri�ngulo � equil�tero");
            } else if ((a == b) || (a == c) || (b == c))
                printf("O tri�ngulo � is�celes");
            else{
                printf("O tri�ngulo � escaleno");
            }
        } else{
            printf("Esse tri�ngulo n�o existe");
        }

    return 0;
}
