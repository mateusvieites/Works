#include <iostream>
#include <map>
#include <stdlib.h>
#include "tools.h"
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
	int opc,codigo, calcular;
	string nome;
	map<int,tools> pessoa;
	map<int,tools>::iterator it;
	int id = 0;
	do{
		cout << "1\nAdicionar\n2-Remover\n3-Listar dados\n4-Parar\nOp��o desejada: ";
		cin >> opc;
		
		switch(opc){
			case 1:
				cout << "Digite seu nome: "; 
				getline( cin, nome );
				cout << "Digite o c�digo: ";
				cin >> codigo;
				calcular = codigo%5;
				pessoa[id] = tools(nome,codigo);
				id++;
			case 2:
				cout << "Digite o c�digo: "; cin >> codigo;
				
			case 3:
				
			case 4:
				cout << "Fechando!" << endl;
				break;
			default:
				cout << "Op��o desejada inv�lida!" << endl;
				break;
		}
		
	}whie(opc != 4)
	
	return 0;
}
