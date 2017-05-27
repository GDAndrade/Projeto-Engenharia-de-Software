#include <iostream>
#include <string>
#include <cstdlib>

#include"Pessoa.h"

 using namespace std;
 

	Pessoa::Pessoa()
 	{
 			
	}
	
	Pessoa::~Pessoa()
	{
	}
	
	void Pessoa::setNome(string n)
	{
		this->nome = n;
	}
	
	string Pessoa::getNome()
	{
		return this->nome;
	}
	
	void Pessoa::setLogin(string l)
	{
		this->login = l;
	}
	
	string Pessoa::getLogin()
	{
		return this->login;
	}
	
	void Pessoa::setSenha(string s)
	{
		this->senha = s;
	}
	
	string Pessoa::getSenha()
	{
		return this->senha;
	}
	
	void Pessoa::setFunc(string f)
	{
		this->func = f;
	}
	
	string Pessoa::getFunc()
	{
		return this->func;
	}
	

 	
 	

 

