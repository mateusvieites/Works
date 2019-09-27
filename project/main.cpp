#include <iostream>
#include <map>
#include <stdlib.h>
#include "tools.h"
#include <locale.h>
#include <fstream>
#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"PORTUGUESE");
	fstream arq0,arq1,arq2,arq3,arq4;
	int opc,codigo, calcular,numApagar,apagarID;
	string nome,linha;
	map<int,tools> pessoa;
	map<int,tools>::iterator it;
	int id = 0;
	bool verificar = false;
	
	//leitura dos dados do programa
	arq0.open("arq0.txt", ios::in);
	while (!arq0.eof()){
		char c_arr[500], *aux = c_arr;
		getline(arq0, linha); //armazena a linha X de arq na string linha
		if(!linha.empty() && linha != "NULL"){	
			strcpy(c_arr, linha.c_str()); 
			codigo = atoi(aux);
			strcpy(c_arr, linha.c_str()); 
			codigo = atoi(aux);
			
			getline(arq0, linha); //armazena a linha X de arq na string linha
			nome = linha;
		
			if(codigo >= 0){
				pessoa[id] = tools(nome,codigo);
				id++;
			}
		}
	}
	arq0.close();
	
	arq1.open("arq1.txt", ios::in);
	while (!arq1.eof()){
		char c_arr[500], *aux = c_arr;
		getline(arq1, linha); //armazena a linha X de arq na string linha
		strcpy(c_arr, linha.c_str());
		if(!linha.empty() && linha != "NULL"){	 
			codigo = atoi(aux);
			
			getline(arq1, linha); //armazena a linha X de arq na string linha
			nome = linha;
			
			if(codigo >= 0){
				pessoa[id] = tools(nome,codigo);
				id++;
			}
		}
	}
	arq1.close();
	
	arq2.open("arq2.txt", ios::in);
	while (!arq2.eof()){
		char c_arr[500], *aux = c_arr;
		getline(arq2, linha); //armazena a linha X de arq na string linha
		strcpy(c_arr, linha.c_str());
		if(!linha.empty() && linha != "NULL"){	
			codigo = atoi(aux);
			
			getline(arq2, linha); //armazena a linha X de arq na string linha
			nome = linha;
			
			if(codigo >= 0){
				pessoa[id] = tools(nome,codigo);
				id++;
			}
		}
	}
	arq2.close();
	
	arq3.open("arq3.txt",ios::in);
	while (!arq3.eof()){
		char c_arr[500], *aux = c_arr;
		getline(arq3, linha); //armazena a linha X de arq na string linha
		strcpy(c_arr, linha.c_str()); 
		if(!linha.empty() && linha != "NULL"){	
			codigo = atoi(aux);
			
			getline(arq3, linha); //armazena a linha X de arq na string linha
			nome = linha;
			
			if(codigo >= 0){
				pessoa[id] = tools(nome,codigo);
				id++;
			}
		}
	}
	arq3.close();
	
	arq4.open("arq4.txt",ios::in);
	while (!arq4.eof()){
		char c_arr[500], *aux = c_arr;
		getline(arq4, linha); //armazena a linha X de arq na string linha
		strcpy(c_arr, linha.c_str()); 
		if(!linha.empty() && linha != "NULL"){	
			codigo = atoi(aux);
			
			getline(arq4, linha); //armazena a linha X de arq na string linha
			nome = linha;
			
			if(codigo >= 0){
				pessoa[id] = tools(nome,codigo);
				id++;
			}
		}
	}
	arq4.close();
	
	//corpo do programa
	do{
		cout << "1-Adicionar\n2-Remover\n3-Listar dados\n4-Parar\nOpção desejada: ";
		cin >> opc;
		
		switch(opc){
			case 1:
				cout << "Digite seu nome: "; 
				cin >> nome;
				do{
					verificar = false;
					cout << "Digite o código: ";
					cin >> codigo;
					for(it = pessoa.begin();it != pessoa.end();it++){
						if(codigo == it->second.getCodigo()){
							verificar = true;
						}	
					}
				}while(verificar);
				calcular = codigo%5;
				pessoa[id] = tools(nome,codigo);
				id++;
				break;
				
			case 2:
				if(!pessoa.empty()){	
					cout<< "Digite um código válido da lista para apagar: " << endl;
					cin >> numApagar;
					apagarID = -1;
					for(it = pessoa.begin();it!=pessoa.end();it++){
						if(numApagar == it->second.getCodigo()){
							apagarID = it->first;
						}
					}
					if(apagarID >= 0){
						pessoa.erase(apagarID);
					}
					else{
						cout << "ID não encontrado ou inexistente!" << endl;
					}
				}
				break;
				
			case 3:
				if(!pessoa.empty()){
       				for(it = pessoa.begin(); it != pessoa.end(); it++){
          				it->second.imprimir();
       				}
    			}else{
      				cout << "O map esta vazio" << endl;
    			}
    			break;
    			
			case 4:
				cout << "Fechando!" << endl;
				if(!pessoa.empty()){
					arq0.open("arq0.txt", ios::trunc | ios::out);
					arq1.open("arq1.txt", ios::trunc | ios::out);
					arq2.open("arq2.txt", ios::trunc | ios::out);
					arq3.open("arq3.txt", ios::trunc | ios::out);
					arq4.open("arq4.txt", ios::trunc | ios::out);
					for(it = pessoa.begin();it != pessoa.end();it++){
							if(0 == it->second.getResto()){
								arq0 << it->second.getCodigo() << "\n" << it->second.getNome() << endl;
							}else if(1 == it->second.getResto()){
								arq1 << it->second.getCodigo() << "\n" << it->second.getNome() << endl;
							}else if(2 == it->second.getResto()){
								arq2 << it->second.getCodigo() << "\n" << it->second.getNome() << endl;
							}else if(3 == it->second.getResto()){
								arq3 << it->second.getCodigo() << "\n" << it->second.getNome() << endl;
							}else if(4 == it->second.getResto()){
								arq4 << it->second.getCodigo() << "\n" << it->second.getNome() << endl;
							}
						}
					arq0.close();
					arq1.close();
					arq2.close();
					arq3.close();
					arq4.close();
   				}else{
       				cout << "O map esta vazio" << endl;
   				}
				break;
			default:
				cout << "Opção desejada inválida!" << endl;
				break;
		}
		
	}while(opc != 4);
	
	return 0;
}
