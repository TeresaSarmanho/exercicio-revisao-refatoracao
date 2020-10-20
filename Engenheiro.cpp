#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

	public:
		int getProjetos() const {return _projetos;}
		void setProjetos(int projetos) {this->_projetos = projetos;}

	private:
		int _projetos;

};

