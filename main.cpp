#include <iostream>
#include<string>
#include <cstdlib>

#include"Pessoa.h"
#include"Professor.h"
#include"Coordenador.h"


using namespace std;

Professor prof[10];
Coordenador coor;

		Professor dia[6];

	
void MontaGrade(string a, string b, string c)
{
	int i, j = 0;
	int compara;
	Professor aux;

	

	Professor restr[10];	
	Professor pfarea[10] ;
	
//	for para limpar o objeto
	for (int l = 0; l<10; l++)
	{
		pfarea[l].setFunc(" ") ;
		restr[l].setFunc(" ");
		restr[l].setSeg(0);
		restr[l].setTer(0);
		restr[l].setQua(0);
		restr[l].setQui(0);
		restr[l].setSex(0);
		restr[l].setSab(0);
	}
	for (int m = 0; m<6; m++)
	{
		dia[m].setFunc(" ") ;
		
	}
	
	
	
//	for para copiar os professores que tem mesma area desejada para o semestre
	for (i = 0; i<10; i++)
	{
		if(prof[i].getArea() == a || prof[i].getArea() == b || prof[i].getArea() == c )
		{
			pfarea[j] = prof[i];
			j++;
		}
	}
	
	j =0;
//	for para ordenar de acordo com o maior numero de restrições
	for (i = 0; i<10; i++)
	{
		if(restr[j].soma() << pfarea[i].soma())
		{
			aux = restr[i];
			restr[j] = pfarea[i];
			restr[j+1] = aux;
		}
		else
		{
			restr[j+1] = pfarea[i];
		}
		j++;
	}
	
	for(i =0; i<6; i++)
	{
		if (dia[0].getFunc() == " " && pfarea[i].getSeg() << 3)
		{
			dia[0] = pfarea[i];
		
		}
		
		else if (dia[1].getFunc() == " " && pfarea[i].getTer() << 3)
		{
			dia[1] = pfarea[i];
		
		}
		
		else if (dia[2].getFunc() == " " && pfarea[i].getQua() << 3)
		{
			dia[2] = pfarea[i];
		
		}
		
		else if (dia[3].getFunc() == " " && pfarea[i].getQui() << 3)
		{
			dia[3] = pfarea[i];
		
		}
		
		else if (dia[4].getFunc() == " " && pfarea[i].getSex() << 3)
		{
			dia[4] = pfarea[i];
		
		}
		
		else if (dia[5].getFunc() == " " && pfarea[i].getSab() << 3)
		{
			dia[5] = pfarea[i];
		
		}
		else
			cout<<"Não alocado"<<endl;
	}
	
	
	
}
		
string TelaCoordenador()
{
	int resp = 1;
	string op1, op2, op3;
	while(resp != 0)
	{
	
		
		cout<<"Digite a opcao desejada!"<<endl;
		cout<<"[1] Listar Professores"<<endl;
		cout<<"[2] Montar Grade"<<endl;
		cout<<"[3] Consultar Grade"<<endl;
		cout<<"[0] Sair" <<endl;
		cin>>resp;
		system("cls"); 
	
		switch (resp)
		{
			
			case 1:
				int i;
				for (i = 0; i<10; i++)
				{
					if(prof[i].getFunc() != " ")
					{
						cout<<"Professor:..."<<prof[i].getNome()<<endl;
						cout<<"Area:........"<<prof[i].getArea()<<endl<<endl;
					}
				}
				system("Pause");
				system("cls"); 
				break;		
			case 2:
				cout<<"Digite 3 Areas que deveram conter no semestre:"<<endl;				
				cout<<"programacao - ";
				cout<<"redes - ";
				cout<<"banco - ";
				cout<<"so - ";
				cout<<"exatas - ";
				cout<<"humanas - "<<endl;
				cin>>op1;
				cin>>op2;
				cin>>op3;
				MontaGrade(op1, op2, op3);
				system("cls"); 		
				break;
			case 3:
				cout<<"Segunda:....."<<dia[0].getNome()<<endl;
				cout<<"Terça:......."<<dia[1].getNome()<<endl;
				cout<<"Quarta:......"<<dia[2].getNome()<<endl;
				cout<<"Quinta:......"<<dia[3].getNome()<<endl;
				cout<<"Sexta:......."<<dia[4].getNome()<<endl;
				cout<<"Sabado:......"<<dia[5].getNome()<<endl;
				
				system("Pause");
				system("cls"); 
				break;
		}
	}	
	
		
		
	
	
	return "concluido\n";
}


string TelaProfessor(int x)
{
	int resp = 1;
	int seg, ter, qua, qui, sex, sab;
	
	cout<<"Nome: "<<prof[x].getNome()<<endl<<endl;
	
	cout<<"Escolha a area em que atua!"<<endl;
	cout<<"[1] Programacao"<<endl;
	cout<<"[2] Redes"<<endl;
	cout<<"[3] Banco de dados"<<endl;
	cout<<"[4] Sistemas Operacionais"<<endl;
	cout<<"[5] Exatas"<<endl;
	cout<<"[6] Humanas"<<endl;
	cout<<"[0] Sair" <<endl;
	cin>>resp;
	
	if(resp == 1)
		prof[x].setArea("programacao");
		
	if(resp == 2)
		prof[x].setArea("redes");
		
	if(resp == 3)
		prof[x].setArea("banco");
		
	if(resp == 4)
		prof[x].setArea("so");
		
	if(resp == 5)
		prof[x].setArea("exatas");
		
	if(resp == 6)
		prof[x].setArea("humanas");
		
	if(resp==0)
		return "Não salvo\n";
					
	system("cls"); 
	
	cout<<"Nome: "<<prof[x].getNome()<<endl<<endl;
	
	cout<<"Digite para cada dia da semana, um valor de 0 a 3 para representar a "<<endl;
	cout<<"restrição para dar aula no dia "<<endl;
	cout<<"0 = Sem restricao"<<endl;
	cout<<"1 = Restricao baixa"<<endl;
	cout<<"2 = Restricao media"<<endl;
	cout<<"3 = Restricao alta"<<endl;
	
	cout<<"Segunda.....";
	cin>>seg;
	cout<<"Terca.......";
	cin>>ter;
	cout<<"Quarta......";
	cin>>qua;
	cout<<"Quinta......";
	cin>>qui;
	cout<<"Sexta.......";
	cin>>sex;
	cout<<"Sabado......";
	cin>>sab;
	
	prof[x].setSeg(seg);
	prof[x].setTer(ter);
	prof[x].setQua(qua);
	prof[x].setQui(qui);
	prof[x].setSex(sex);
	prof[x].setSab(sab);
	
		return "Informacoes Gravadas com sucesso \n";

}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	string nome, login, senha;
	int  resp = 1;
	

	coor.setFunc(" ");
	for (int j = 0; j<10; j++)
	{
		prof[j].setFunc(" ") ;
	}
	
	while(resp != 0)
	{
	
		
		cout<<"Digite a opcao desejada!"<<endl;
		cout<<"[1] Logar"<<endl;
		cout<<"[2] Cadastrar Professor"<<endl;
		cout<<"[3] Cadastrar Coordenador"<<endl;
		cout<<"[0] Sair" <<endl;
		cin>>resp;
		system("cls"); 
	
		switch (resp)
		{
			
			case 1:
				cout<<"	Login"<<endl;
				cout<<"Digite o Login: ";
				cin>>login;
				cout<<"Digite a Senha: ";
				cin>>senha;	
				
				if(coor.getLogin()==login && coor.getSenha() == senha)
				{
					system("cls");
					cout<<TelaCoordenador();
					system("Pause");
					 
					break;
				}
				else
				{				
					for(int i = 0; i<10; i++)
					{
						if(prof[i].getLogin() == login && prof[i].getSenha() == senha)
						{
					
							system("cls");
							cout<<TelaProfessor(i);
							system("Pause");
							break;
						}
					}
				}
						
				system("cls"); 
				break;		
			case 2:
				cout<<"	Cadastro de Professor"<<endl;
				cout<<"Digite o Nome: ";
				cin>>nome;
				cout<<"Digite o Login: ";
				cin>>login;
				cout<<"Digite a Senha: ";
				cin>>senha;	
				for(int i = 0; i<10; i++)
				{
					if(prof[i].getFunc() == " ")
					{
						prof[i].setNome(nome);
						prof[i].setLogin(login);
						prof[i].setSenha(senha);
						prof[i].setFunc("Professor");
						system("cls"); 
						
						break;
					}
				}
				system("cls"); 		
				break;
			case 3:
				cout<<"	Cadastro de Coordenador"<<endl;
				cout<<"Digite o Nome: ";
				cin>>nome;
				cout<<"Digite o Login: ";
				cin>>login;
				cout<<"Digite a Senha: ";
				cin>>senha;	
				
				if(coor.getFunc() == " ")
				{
					coor.setNome(nome);
					coor.setLogin(login);
					coor.setSenha(senha);
					coor.setFunc("Coordenador");
						
				}
				else
				{
					cout<<"Ja existe um Coordenador Cadastrado"<<endl;
					system("Pause");
				}
				system("cls"); 
				break;
		}
	}	
	return 0;
}
