#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contato {
    string nome;
    string telefone;
    string email;
};

void adicionarContato(vector<Contato> &agenda) {
    Contato novoContato;
    cout << "Digite o nome do contato: ";
    cin >> novoContato.nome;
    cout << "Digite o telefone do contato: ";
    cin >> novoContato.telefone;
    cout << "Digite o email do contato: ";
    cin >> novoContato.email;
    agenda.push_back(novoContato);
}

void exibirAgenda(const vector<Contato> &agenda) {
    cout << "Agenda de Contatos:" << endl;
    for (const Contato &contato : agenda) {
        cout << "Nome: " << contato.nome << endl;
        cout << "Telefone: " << contato.telefone << endl;
        cout << "Email: " << contato.email << endl << endl;
    }
}

int main() {
    vector<Contato> agenda;
    char opcao;

    do {
        cout << "Menu de Opcoes:" << endl;
        cout << "1. Adicionar Contato" << endl;
        cout << "2. Exibir Agenda de Contatos" << endl;
        cout << "3. Sair do Sistema" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case '1':
                adicionarContato(agenda);
                break;
            case '2':
                exibirAgenda(agenda);
                break;
            case '3':
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    } while (opcao != '3');

    return 0;
}
