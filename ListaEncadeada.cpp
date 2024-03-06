#include <iostream>
#include "ListaEncadeada.h"

// Definição do construtor da classe ListaEncadeada
ListaEncadeada::ListaEncadeada() : inicio(nullptr) {}

// Definição do destrutor da classe ListaEncadeada
ListaEncadeada::~ListaEncadeada() {
    Celula* temp;
    while (inicio != nullptr) {
        temp = inicio;
        inicio = inicio->prox;
        delete temp;
    }
}

// Definição do método inserirElemento da classe ListaEncadeada
void ListaEncadeada::inserirElemento(int valor) {
    Celula* novaCelula = new Celula(valor);
    if (inicio == nullptr) {
        inicio = novaCelula;
    } else {
        Celula* temp = inicio;
        while (temp->prox != nullptr) {
            temp = temp->prox;
        }
        temp->prox = novaCelula;
    }
}

// Definição do método buscarElemento da classe ListaEncadeada
Celula* ListaEncadeada::buscarElemento(int valor) {
    Celula* temp = inicio;
    while (temp != nullptr) {
        if (temp->conteudo == valor) {
            return temp;
        }
        temp = temp->prox;
    }
    return nullptr; 
}

// Definição do método removerElemento da classe ListaEncadeada
void ListaEncadeada::removerElemento(int valor) {
    Celula* atual = inicio;
    Celula* anterior = nullptr;

    while (atual != nullptr && atual->conteudo != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == nullptr) {
        std::cout << "Elemento nao encontrado na lista.\n";
        return;
    }

    if (anterior == nullptr) {
        inicio = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    delete atual;
}

// Definição do método exibirLista da classe ListaEncadeada
void ListaEncadeada::exibirLista() {
    Celula* temp = inicio;
    std::cout << "Lista: ";
    while (temp != nullptr) {
        std::cout << temp->conteudo << " ";
        temp = temp->prox;
    }
    std::cout << std::endl;
}
