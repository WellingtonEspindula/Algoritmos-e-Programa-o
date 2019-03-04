/*
    Wellington Espindula - wmespindula@inf.ufrgs.br

*/

#include <stdio.h>
#include <string.h>

#define RANGE_CARACTERES 26
#define TAMANHO_FRASE 100

int main(){
    // Cria os strings
    char caracteresSubstituveis[RANGE_CARACTERES];
    char caracteresSubstitutos[RANGE_CARACTERES];
    char fraseO[TAMANHO_FRASE];
    char fraseCifrada[TAMANHO_FRASE];

    //Inicializa o valor das strings
    puts("Informe os caracteres que devem ser trocados: ");
    gets(caracteresSubstituveis);
    puts("Informe os caracteres substitutos: ");
    gets(caracteresSubstitutos);

    puts("Informe a frase que deve ser cifrada: ");
    gets(fraseO);

    //Inicia um laco de repeticao, que dura ate o fim da frase lida
    // e substitui cada caractere pelo substituto, se houver
    int i = 0;
    char c;
    do {
        c = fraseO[i];
        int posicaoCaractere = -1;

        // laco de repeticao que verifica a posicao do caractere da frase e ve se existe
        // um caractere que deva ser substituido e qual a posicao deste no array de caracteres
        //  que devem ser substituidos
        int j = 0;
        do {
            if (c == caracteresSubstituveis[j]){
                posicaoCaractere = j;
            }
            j++;
        } while (caracteresSubstituveis[j] != '\0');

        if (posicaoCaractere == -1){
            fraseCifrada[i] = c;
        } else {
            fraseCifrada[i] = caracteresSubstitutos[posicaoCaractere];
        }
        i++;
    } while (c != '\0');

    puts("\nFrase cifrada: ");
    puts(fraseCifrada);

    return 0;
}
