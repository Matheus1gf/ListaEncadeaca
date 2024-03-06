#include <iostream>
#include "ListaEncadeada.h"

int main() {
    ListaEncadeada lista;
    int escolha, valor;

    do {
        std::cout << "\nMenu de Operacoes:\n";
        std::cout << "1 - Inserir elemento\n";
        std::cout << "2 - Buscar elemento\n";
        std::cout << "3 - Remover elemento\n";
        std::cout << "4 - Exibir lista\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Digite o valor a ser inserido: ";
                std::cin >> valor;
                lista.inserirElemento(valor);
                break;
            case 2:
                std::cout << "Digite o valor a ser buscado: ";
                std::cin >> valor;
                if (lista.buscarElemento(valor) != nullptr) {
                    std::cout << "Elemento encontrado na lista.\n";
                } else {
                    std::cout << "Elemento nao encontrado na lista.\n";
                }
                break;
            case 3:
                std::cout << "Digite o valor a ser removido: ";
                std::cin >> valor;
                lista.removerElemento(valor);
                break;
            case 4:
                lista.exibirLista();
                break;
            case 0:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opcao invalida.\n";
        }
    } while (escolha != 0);

    return 0;
}
