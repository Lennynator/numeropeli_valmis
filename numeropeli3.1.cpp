#include <iostream>
using namespace std;

int main() {
	int numero;
	int isompinumero;
	cout << "Pelataan Kiinalaista Numeropeli�!\nAnna luku ";
	cin >> numero;


	while (numero != INT_MAX) {
		isompinumero = numero + 1;
		cout << "Minun numeroni on " << isompinumero << ", voitin" << endl;

		cout << "Pelataan Kiinalaista Numeropeli�!\nAnna luku ";
		cin >> numero;
	}
	if (numero == INT_MAX) {
		cout << "Aika iso luku. Sanotaan ett� tuli tasapeli";
		return 0;

	}




	return 0;
}
