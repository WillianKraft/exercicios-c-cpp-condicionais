/*
 * Exercicio 10 - Sistema simples de orcamento de software | Desafio
 * Praticar: string, char, double, cin, cout, switch, if e operadores aritmeticos.
 *
 *   1 - Site institucional: R$ 2.000
 *   2 - Aplicativo mobile:  R$ 5.000
 *   3 - Sistema web:        R$ 8.000
 *
 * Se o projeto for urgente (S), acrescenta 20% ao valor.
 */
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string cliente;
    string projeto;
    int opcao;
    char urgente;
    double valor;

    cout << "Nome do cliente: ";
    getline(cin, cliente);

    cout << "\nTipos de projeto:" << endl;
    cout << "1 - Site institucional: R$ 2000" << endl;
    cout << "2 - Aplicativo mobile:  R$ 5000" << endl;
    cout << "3 - Sistema web:        R$ 8000" << endl;
    cout << "Opcao de projeto: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            projeto = "Site institucional";
            valor = 2000;
            break;
        case 2:
            projeto = "Aplicativo mobile";
            valor = 5000;
            break;
        case 3:
            projeto = "Sistema web";
            valor = 8000;
            break;
        default:
            cout << "Opcao invalida." << endl;
            return 1;
    }

    cout << "O projeto e urgente? (S/N): ";
    cin >> urgente;
    urgente = toupper(urgente);

    if (urgente == 'S') {
        valor = valor + valor * 0.20;
    } else {
        urgente = 'N';
    }

    cout << "\nCliente: " << cliente << endl;
    cout << "Projeto: " << projeto << endl;
    cout << "Urgente: " << urgente << endl;
    cout << "Valor final: R$ " << valor << endl;

    return 0;
}
