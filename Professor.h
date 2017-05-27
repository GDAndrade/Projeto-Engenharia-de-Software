#include <cstdlib>
#include <iostream>
#include<string>

#include "Pessoa.h"

#ifndef Professor_H
#define Professor_H

class Professor : public Pessoa {
	
private:
	string area;
	int seg, ter, qua, qui, sex, sab;
	

public:
	Professor();
	~Professor();
	void setArea(string);
	string getArea();
	void setSeg(int);
	int getSeg();
	void setTer(int);
	int getTer();
	void setQua(int);
	int getQua();
	void setQui(int);
	int getQui();
	void setSex(int);
	int getSex();
	void setSab(int);
	int getSab();
	int soma();
	
};

#endif
