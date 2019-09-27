#ifndef _TOOLS_H
#define _TOOLS_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class tools{
	private:
		string nome;
		int codigo;
		int resto;
	public:
		tools();
		tools(string nome,int codigo);
		~tools();
		void gravar(string nome, int codigo);
		void excluir(int id);
		void imprimir();
		int getCodigo();
		void setCodigo(int codigo);
		void setNome(string nome);
		string getNome();
		int getResto();		
};

tools::tools(){
	
}

tools::tools(string nome, int codigo){
	this->nome = nome;
	this->codigo = codigo;
	this->resto = codigo%5;
}

tools::~tools(){
	
}

void tools::gravar(string nome, int codigo){
	
}

void tools::excluir(int id){
	
}


void tools::imprimir(){
	cout << "-----------------" << endl;
	cout << "Código: " << codigo << endl;
	cout << "Nome: " << nome << endl;
	cout << "-----------------" << endl;
}

void tools::setCodigo(int codigo){
	this->codigo = codigo;
}

int tools::getCodigo(){
	return this->codigo;
}

void tools::setNome(string nome){
	this->nome = nome;
}

string tools::getNome(){
	return this->nome;
}

int tools::getResto(){
	return this->resto;
}

#endif
