/*
 * Exercicio 5 - Status de um servidor | Medio
 * Praticar: if, else if e else.
 *
 * Classifica a utilizacao da CPU:
 *   menor que 50%   -> Uso normal
 *   de 50% ate 80%  -> Atencao
 *   acima de 80%    -> Uso critico
 */
#include <stdio.h>

int main() {

    double cpu;

    printf("Uso da CPU (%%): ");
    scanf("%lf", &cpu);

    if (cpu < 50) {
        printf("Status: Uso normal\n");
    }
    else if (cpu <= 80) {
        printf("Status: Atencao\n");
    }
    else {
        printf("Status: Uso critico\n");
    }

    return 0;
}
