
#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>


using namespace std;

class Veiculo{
	protected:
		string m_cor;
		string m_placa;
		int    m_ano;
		string m_modelo;

	public:
		
		Veiculo(string cor, string placa, int ano, string modelo);
		Veiculo();
		~Veiculo();
		virtual int ano() = 0;
		void printVeiculo();
};
#endif
