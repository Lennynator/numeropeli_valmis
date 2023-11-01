#include <iostream>
using namespace std;

int main() {
	int numero;
	int isompinumero;
	cout << "Pelataan Kiinalaista Numeropeliä!\nAnna luku ";
	cin >> numero;


	while (numero != INT_MAX) {
		isompinumero = numero + 1;
		cout << "Minun numeroni on " << isompinumero << ", voitin" << endl;

		cout << "Pelataan Kiinalaista Numeropeliä!\nAnna luku ";
		cin >> numero;
	}
	if (numero == INT_MAX) {
		cout << "Aika iso luku. Sanotaan että tuli tasapeli";
		return 0;

	}




	return 0;
}
