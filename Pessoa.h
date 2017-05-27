#include <iostream>
#include <string>
#include <cstdlib>

#ifndef PESSOA_H
#define PESSOA_H

 using namespace std;
 
 class Pessoa
 {
 	protected:
 		string nome, login, senha, func;
 	public: 		
 		Pessoa();
		virtual ~Pessoa();
		void setNome(string);	
		string getNome();
		void setLogin(string);
		string getLogin();
		void setSenha(string);
		string getSenha(); 	
		void setFunc(string);
		string getFunc(); 	
 	
 };
 
 #endif
