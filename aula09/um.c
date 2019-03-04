#include <stdio.h>

int maiorOuMenor(int n1, int n2, int n3, char op){
    if (op == 'm'){
        if (n1 < n2){
            if (n2 < n3){
                return n1;
            } else {
                if (n1 < n3){
                    return n1;
                } else {
                    return n3;
                }
            }
        } else {
            if (n2 < n3){
                return n2;
            } else {
                return n3;
            }
        }

    } else if (op == 'M'){
        if (n1 > n2){
            if (n2 > n3){
                return n1;
            } else {
                if (n1 > n3){
                    return n1;
                } else {
                    return n3;
                }
            }
        } else {
            if (n2 > n3){
                return n2;
            } else {
                return n3;
            }
        }

    }
}


int main(){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    char op;

    printf("Entre os três numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Entre o indicador (m ou M): ");
    scanf(" %c", &op);

    if (op == 'm'){
        printf("O menor numero lido foi: %d", maiorOuMenor(n1, n2, n3, op));
    } else if (op == 'M'){
        printf("O maior numero lido foi: %d", maiorOuMenor(n1, n2, n3, op));
    } else {
        printf("A opção não é válida");
    }

    return 0;
}
