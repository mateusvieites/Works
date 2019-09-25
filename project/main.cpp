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
		//tools.gravar(); - n sei se funciona pessoa[id] = tools("getNomeLinha i","getCodigoLinha i") <- importante
		//tools.gravar(); - vai rodar todas linhas no arquivo pegando codigo e nome e colocando no map (usar nosso trabalho anterior como referencia) <- importante
		cout << "1\nAdicionar\n2-Remover\n3-Listar dados\n4-Parar\nOpção desejada: ";
		cin >> opc;
		
		switch(opc){
			case 1:
				cout << "Digite seu nome: "; 
				getline( cin, nome );
				cout << "Digite o código: ";
				cin >> codigo;
				calcular = codigo%5;
				pessoa[id] = tools(nome,codigo);
				id++;
				break;
				
			case 2:
				cout << "Digite o código: "; cin >> codigo;
					//acho q era algo como map.remove<id> tem q checar no PDF no ava
				break;
				
			case 3:
				if(!map1.empty()){
       				for(it = map1.begin(); it != map1.end(); it++){
          				cout << "-----------------" << endl;
         				it->second.imprimir(); // tem q criar função imprimir acredito eu ou função getNome e getCodigo, sua escolha
       				}
    			}else{
      				cout << "O map esta vazio" << endl;
    			}
    			break;
    			
			case 4:
				cout << "Fechando!" << endl;
				if(!map1.empty()){
       				for(it = map1.begin(); it != map1.end(); it++){
          				//armazenar codigo e nome em cada linha
      				}
   				}else{
       				cout << "O map esta vazio" << endl;
   				}
				break;
				
			default:
				cout << "Opção desejada inválida!" << endl;
				break;
		}
		
	}while(opc != 4)
	
	return 0;
}
