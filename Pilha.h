#pragma once

namespace PilhaSpace{
	template <typename Tipo> // Tipo é o parâmetro do tamplate
	class Pilha{
	private:            //**Esses membros são visíveis apenas para outros
		            //** membros e amigos (friends)
	    Tipo *vetor;
	    int max_tam;
	    int topo;
	public:         //**membros declarados que são visíveis para os cliente
	    Pilha(int tamanho);    //**Construtor para um determinado tamanho de elemento
	    Pilha();    //**Construtor para uma pilha de 100 elementos
	    ~Pilha();   //**Destrutor
	    void push(Tipo valor);
	    void pop();
	    Tipo* getTopo();
	    int vazio();
	};
}