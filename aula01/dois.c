#include <stdio.h>

int main(){
    int numAulasAssistidas;
    float notaP1, notaP2, notaAP, notaNT;
    float notaMF;
    char conceito;

    printf("Digite o número de aulas assistidas: ");
    scanf("%d", &numAulasAssistidas);

    if (( (float) numAulasAssistidas/45) >= 0.75){
        printf("Digite a nota da primeira prova (P1): ");
        scanf("%f", &notaP1);
        printf("Digite a nota da segunda prova (P2): ");
        scanf("%f", &notaP2);
        printf("Digite a nota das aulas práticas (AP): ");
        scanf("%f", &notaAP);
        printf("Digite a nota do trabalho final (NT): ");
        scanf("%f", &notaNT);

        notaMF = (0.3*notaP1) + (0.45*notaP2) + (0.15*notaAP) + (0.1*notaNT);
        if (notaMF > 8.4){
		if (notaNT > 0){
			conceito = 'A';
		} else {
			conceito = 'B';
		}
        } else if ((notaMF >= 7.5) && (notaMF <= 8.4)) {
            conceito = 'B';
        } else if ((notaMF >= 6) && (notaMF < 7.5)){
            conceito = 'C';
        } else {
            conceito = 'D';
        }

        printf("A nota final é %.1f e o conceito é %c \n", notaMF, conceito);
    } else {
        printf("O aluno reprovou por FF (falta de frequência/fez fiasco)\n");
    }
    return 0;
}
