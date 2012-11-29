#include "Veiculo.h"
#include "Carro.h"

using namespace std;

int main() {

	Carro * c1 = new Carro("Mercedes","SLS","08-LL-54","Super Sports");
	Carro * c2 = new Carro("BMW","E30","RP-40-23","Coupe");

	cout << "ID de c1: " << c1->getID() << endl;
	cout << "ID de c2: " << c2->getID() << endl;

	return 0;
}
