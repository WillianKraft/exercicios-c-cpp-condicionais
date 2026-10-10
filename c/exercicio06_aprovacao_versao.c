/*
 * Exercicio 6 - Aprovacao de versao de software | Medio
 * Praticar: integrar entrada/saida, calculo e condicionais.
 *
 * percentual = (aprovados * 100.0) / total
 *   90% ou mais     -> Versao aprovada
 *   70% a 89,99%    -> Versao requer revisao
 *   abaixo de 70%   -> Versao reprovada
 */
#include <stdio.h>

int main() {

    int total;
    int aprovados;
    double percentual;

    printf("Quantidade total de testes executados: ");
    scanf("%d", &total);

    printf("Quantidade de testes aprovados: ");
    scanf("%d", &aprovados);

    // Evita divisao por zero e valores impossiveis
    if (total <= 0 || aprovados < 0 || aprovados > total) {
        printf("Dados invalidos.\n");
        return 1;
    }

    percentual = (aprovados * 100.0) / total;

    printf("\nPercentual de aprovacao: %.2f%%\n", percentual);

    if (percentual >= 90) {
        printf("Resultado: Versao aprovada\n");
    }
    else if (percentual >= 70) {
        printf("Resultado: Versao requer revisao\n");
    }
    else {
        printf("Resultado: Versao reprovada\n");
    }

    return 0;
}
