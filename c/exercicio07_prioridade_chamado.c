/*
 * Exercicio 7 - Classificacao de prioridade de chamado | Medio
 * Praticar: switch/case.
 *
 *   1 - Baixa
 *   2 - Media
 *   3 - Alta
 *   4 - Critica
 *   qualquer outro numero -> Prioridade invalida
 */
#include <stdio.h>

int main() {

    int codigo;

    printf("Codigos: 1-Baixa  2-Media  3-Alta  4-Critica\n");
    printf("Informe o codigo da prioridade: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Prioridade: Baixa\n");
            break;
        case 2:
            printf("Prioridade: Media\n");
            break;
        case 3:
            printf("Prioridade: Alta\n");
            break;
        case 4:
            printf("Prioridade: Critica\n");
            break;
        default:
            printf("Prioridade invalida.\n");
    }

    return 0;
}
