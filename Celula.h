#ifndef CELULA_H
#define CELULA_H

// Classe chamada Celula, que representa um nó da lista encadeada. 
// Cada célula possui um campo para armazenar o conteúdo (int conteudo) e um 
// ponteiro para a próxima célula (Celula* prox). O construtor da classe 
// inicializa o conteúdo com o valor fornecido e define o ponteiro para a 
// próxima célula como nulo.
// Celula.h
class Celula {
public:
    int conteudo;
    Celula* prox;

    Celula(int valor);
};

#endif
