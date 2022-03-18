#include <iostream>
#include "Pilha.cpp"

int main(int argc, char *argv[]){
	using namespace PilhaSpace;
	Pilha<std::string> *p1 = new Pilha<std::string>(10);    //**Momento que é criado uma instância
	//**da Classe pilha de tamanho 10
	std::cout << "Pilha vazia: " << p1->vazio() <<'\n';
	p1->push("oi");
	std::cout << "Topo: " << *(p1->getTopo()) << '\n';
	p1->push("tudo bem?");
	p1->push("bom dia");
	p1->pop();
	std::cout << "Topo: " << *(p1->getTopo()) << '\n';
	std::cout << "Pilha vazia: " << p1->vazio() <<'\n';
	std::cout << "----" << '\n';


	Pilha<int> p2(100);
	std::cout << ". . . " << "\n";
	p2.push(20);
	std::cout << ". . . " << "\n";
	std::cout << "Topo: " << *(p2.getTopo()) << '\n';
	return 0;
}