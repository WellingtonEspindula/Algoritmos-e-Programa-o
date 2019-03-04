#include <stdio.h>

#define FALSE 0
#define TRUE 1


int isItInsideTheSquare(int x1, int y1, int x2, int y2, int x3, int y3){

    //Tratamento dos pontos minimos e maximos do retangulo
    int minX, minY;
    int maxX, maxY;

    if (x1 < x2){
        minX = x1;
        maxX = x2;
    } else {
        minX = x2;
        maxX = x1;
    }

    if (y1 < y2){
        minY = y1;
        maxY = y2;
    } else {
        minY = y2;
        maxY = y1;
    }

    // Verifica se o ponto esta dentro do retangulo
    if ( ((x3 >= minX) && (x3 <= maxX)) && ((y3 >= minY) && (y3 <= maxY)) ){
        return TRUE;
    } else{
        return FALSE;
    }

}


int main(){
    int x1 = 0;
    int y1 = 0;

    int x2 = 0;
    int y2 = 0;

    int x3 = 0;
    int y3 = 0;


    printf("Entre as coordenadas x e y do ponto 1: ");
    scanf("%d %d", &x1, &y1);

    printf("Entre as coordenadas x e y do ponto 2: ");
    scanf("%d %d", &x2, &y2);

    printf("Entre as coordenadas x e y do ponto 3: ");
    scanf("%d %d", &x3, &y3);

    int resultado = isItInsideTheSquare(x1, y1, x2, y2, x3, y3);
    if (resultado == TRUE){
        printf("O ponto 3 está dentro do retângulo");
    } else{
        printf("O ponto 3 está fora do retângulo");
    }


    return 0;
}
