/*

Wellington Espindula - wmespindula@inf.ufrgs.br

Entrada:
    Progresso em fraçao
    Tamanho da barra

Funcionamento:
    O programa irá ler os progresso a ser representado e o tamanho da barra, apos irá imprimir uma barra de progresso com o tamanho de caracteres empregados, seguindo as regras abaixo:
        “<” indica o inicio da barra
        “#” indica informação processada
        “-“ indica informação faltante
        “>” indica o final da barra
Saída:
    Barra de progresso, como a seguinte:
        <#####----->


*/

#include <stdio.h>
#include <math.h>

int main(){
    float x;
    int n;

    printf("Entre com o progresso atual (x) e tamanho (N) da barra: ");
    scanf("%f %d", &x, &n);
    if ( ((n >= 5) && (n <= 50)) && ((x >= 0) && (x <= 1)) ){

        // Calcula o número de caracteres que será utilizado para o progresso
        int numCaracteresBarra = round((x*n));

        // Imprime a barra de progresso
        printf("\n<");
        for (int i = 0; i < n; i++){
            if (i < numCaracteresBarra){
                printf("#");
            } else {
                printf("-");
            }
        }
        printf(">\n");
    } else {
        printf("O valor entrado está fora dos parâmetros de funcionamento do programa");
    }


    return 0;
}
