#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

	public:
		double getQuotaMensal() const {return _quotaMensalVendas;}
		void setQuotaMensal(double quota) {this->_quotaMensalVendas = quota;}

		double quotaAnual() {
			return getQuotaMensal() * 12;
		}

	private:
		double _quotaMensalVendas;

};

