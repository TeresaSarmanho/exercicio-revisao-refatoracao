#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

	public:
		double getSalarioHora() const {return _salarioHora;}
		std::string getNome() const {return _nome;}

		void setSalarioHora(double salario) {this->_salarioHora = salario;}
		void setNome(std::string nome) {this->_nome = nome;}

		double pagamentoMes(double horasTrabalhadas) {
			double tempoReal = horasTrabalhadas;

			//Calculo de hora extra (+50% se horasTrabalhadas > 8)
			if (horasTrabalhadas > JORNADA_DIARIA) {
				double horasExtras = horasTrabalhadas - JORNADA_DIARIA;
				tempoReal += horasExtras * BONUS_HORA_EXTRA;
			}
			
			return tempoReal * getSalarioHora();
		}

	private:
		double _salarioHora;
		std::string _nome;

		double const BONUS_HORA_EXTRA = 0.5; // aumento de 50% por hora extra.
		int const JORNADA_DIARIA = 8;

};

#endif
