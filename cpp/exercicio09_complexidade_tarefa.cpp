/*
 * Exercicio 9 - Avaliacao de complexidade de uma tarefa | Intermediario
 * Praticar: desenvolver raciocinio com varias condicoes.
 *
 *   ate 4 horas               -> Tarefa simples
 *   acima de 4 e ate 12 horas -> Tarefa media
 *   acima de 12 e ate 24 horas-> Tarefa complexa
 *   acima de 24 horas         -> Tarefa muito complexa
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

    string nomeTarefa;
    double horas;
    string classificacao;

    cout << "Nome da tarefa: ";
    getline(cin, nomeTarefa);

    cout << "Quantidade estimada de horas: ";
    cin >> horas;

    if (horas <= 4) {
        classificacao = "Tarefa simples";
    }
    else if (horas <= 12) {
        classificacao = "Tarefa media";
    }
    else if (horas <= 24) {
        classificacao = "Tarefa complexa";
    }
    else {
        classificacao = "Tarefa muito complexa";
    }

    cout << "\nTarefa: " << nomeTarefa << endl;
    cout << "Classificacao: " << classificacao << endl;

    return 0;
}
