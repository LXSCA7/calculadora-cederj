#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char resposta;
    do {
        system("cls");
        printf("+--------------------+\n");
        printf("| CALCULADORA CEDERJ |\n");
        printf("+--------------------+\n");
        
        
        float AD[2], AP[2], nota[2];

        // usuario insere notas
        printf("| Insira nota AD1: ");
        scanf("%f", &AD[0]);

        printf("| Insira nota AP1: ");
        scanf("%f", &AP[0]);

        printf("| Insira nota AD2: ");
        scanf("%f", &AD[1]);

        printf("| Insira nota AP2: ");
        scanf("%f", &AP[1]);

        // calcula notas com peso 2 e 8
        nota[0] = ((AD[0] * 0.2) + (AP[0] * 0.8));
        nota[1] = ((AD[1] * 0.2) + (AP[1] * 0.8));
        float N = (nota[0] + nota[1]) / 2;
        printf("+---------------------+\n");
        printf("|      N1 = %.2f      |\n", nota[0]);
        printf("+---------------------+\n");
        printf("|      N2 = %.2f      |\n", nota[1]);
        printf("+---------------------+\n");
        printf("|      N = %.2f       |\n", N);
        printf("+---------------------+\n");

        // diz se precisa ou nao de AP3
        if (N >= 6) {
            printf("+---------------------+\n");
            printf("|      APROVADO       |\n");
            printf("+---------------------+\n");
        } else {
            printf("+---------------------+\n");
            printf("|      FAZER AP3      |\n");
            printf("+---------------------+\n");
        }
        printf("DESEJA CALCULAR NOVAMENTE? [S/N]: ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');
    return 0;
}