#include <iostream>
using namespace std;

int main() {
	int numero;
	int isompinumero;
	cout << "Pelataan Kiinalaista Numeropeliš!\nAnna luku ";
	cin >> numero;


	while (numero != 0) {
		isompinumero = numero + 1;
		cout << "Minun numeroni on " << isompinumero << ", voitin" << endl;

		cout << "Pelataan Kiinalaista Numeropeliš!\nAnna luku ";
		cin >> numero;
	}




	return 0;
}

