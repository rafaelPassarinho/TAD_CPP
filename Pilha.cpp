// Implementação do TAD Pilha (Stack)
#include <iostream>
#include "Pilha.h"

using namespace PilhaSpace;

template <typename Tipo>
Pilha<Tipo>::Pilha(int tamanho){        //Construtor da Classe
    this->vetor = new Tipo[tamanho];
    max_tam = tamanho - 1;
    topo = -1;
}

template <typename Tipo>
Pilha<Tipo>::Pilha(){
    this->vetor = new Tipo[100];
    this->max_tam = 99;
    this->topo = -1;
}

template <typename Tipo>
Pilha<Tipo>::~Pilha(){       //Destrutor
    delete vetor;
}

template <typename Tipo>
void Pilha<Tipo>::push(Tipo valor){
    if (this->topo == this->max_tam)
        std::cout << "Pilha cheia!" << '\n';
    else
        this->vetor[++topo] = valor;
}

template <typename Tipo>
void Pilha<Tipo>::pop(){
    if(this->topo == -1)
        std::cout << "Pilha vazia!" << '\n';
    else
        this->topo--;
}

template <typename Tipo>
Tipo* Pilha<Tipo>::getTopo(){
	if(this->topo != -1)
		return &(this->vetor[topo]);
	else{
		std::cout << "Pilha vazia!" << '\n';
		return NULL;
	}
}

template <typename Tipo>
int Pilha<Tipo>::vazio(){
    return (this->topo == -1);
}