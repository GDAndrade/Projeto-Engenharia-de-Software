#include <iostream>
#include <string>
#include <cstdlib>

#include"Professor.h"

 using namespace std;
 
 Professor::Professor()
 {
 	
 }
 
 Professor::~Professor()
 {
 	
 }
 
 void Professor::setArea(string A)
 {
 	this->area = A;
 }
 
 string Professor::getArea()
 {
 	return this->area;
 }
 
 void Professor::setSeg(int segunda)
 {
 	this->seg = segunda;
 }
	
 int Professor::getSeg()
 {
 	return this->seg;
 }
 
  
  void Professor::setTer(int terca)
 {
 	this->ter = terca;
 }
	
 int Professor::getTer()
 {
 	return this->ter;
 }
 
  void Professor::setQua(int quarta)
 {
 	this->qua = quarta;
 }
	
 int Professor::getQua()
 {
 	return this->qua;
 }
 
  void Professor::setQui(int quinta)
 {
 	this->qui = quinta;
 }
	
 int Professor::getQui()
 {
 	return this->qui;
 }
 
  void Professor::setSex(int sexta)
 {
 	this->sex = sexta;
 }
	
 int Professor::getSex()
 {
 	return this->sex;
 }
 
  void Professor::setSab(int sabado)
 {
 	this->sab = sabado;
 }
	
 int Professor::getSab()
 {
 	return this->sab;
 }
 int Professor::soma()
 {
 	
 	return (seg + ter + qua + qui + sex + sab);
 }
 

