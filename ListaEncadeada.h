#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include "Celula.h"

// Declaração da classe ListaEncadeada
class ListaEncadeada {
private:
    Celula* inicio;

public:
    ListaEncadeada();

    ~ListaEncadeada();

    void inserirElemento(int valor);

    Celula* buscarElemento(int valor);

    void removerElemento(int valor);

    void exibirLista();
};

#endif
