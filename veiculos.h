#ifndef VEICULO_h
#define VEICULO_h

#include <iostream>

class Veiculo
{
private:
    std::string cor;
    std::string modelo;
    int rodas;
    int ano;
    int maxPassageiros;

    Veiculo();

    Veiculo(std::string cor, std::string modelo, int rodas, int ano, int maxPassageiros) : cor(cor),
            modelo(modelo), rodas(rodas), ano(ano), maxPassageiros(maxPassageiros) {}
    
    std::string getCor() { return this->cor; };
    std::string getModelo() { return this->modelo; };

    int getRodas() {return this->rodas; };
    
    int getAno() { return this->ano; };
    int getMaxPassageiros() { return this->maxPassageiros; };

    virtual double getConsumoPorKM() = 0;

    void setCor(std::string cor) { this->cor = cor;}
    void setModelo(std::string modelo) { this->modelo = modelo;}
    void setAno(int ano) { this->ano = ano;}
    void setRodas(int quantidade) { this->rodas = quantidade;}
    void setMaxPassageiros(int maxPassageiros) { this->maxPassageiros = maxPassageiros;}

};

#endif