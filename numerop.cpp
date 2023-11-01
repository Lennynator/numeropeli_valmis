#include <iostream>
using namespace std;

int main() {
	int numero;
	int isompinumero;
	cout << "Pelataan Kiinalaista Numeropeliä!\nAnna luku ";
	cin >> numero; 

	isompinumero = numero + 1;

	if (true) {
		isompinumero = numero + 1;
		cout << "Minun numeroni on " << isompinumero << ", voitin" << endl;

		cout << "Pelataan Kiinalaista Numeropeliä!\nAnna luku ";
		cin >> numero;
	}



	return 0;
}