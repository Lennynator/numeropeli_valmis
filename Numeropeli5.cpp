#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int alin, ylin;
    int salanumero;
    int userGuess = 0;
    int turns = 0;

    cout << "Anna alin numero: ";
    cin >> alin;

    cout << "Anna ylin numero: ";
    cin >> ylin;

    if (alin >= ylin) {
        cout << "Ei mahdollinen skaala. Varmista, että alin on pienempi kuin ylin." << endl;
        return 1;
    }

    salanumero = rand() % (ylin - alin + 1) + alin; 

    cout << "Arvaa numero valilla " << alin << " ja " << ylin << endl;

    while (userGuess != salanumero) {
        cout << "Kirjoita arvaus: ";
        cin >> userGuess;

       
        if (userGuess < salanumero) {
            cout << "Liian pieni!." << endl;
        }
        else if (userGuess > salanumero) {
            cout << "Liian suuri!." << endl;
        }
        else {
            cout << "Arvasit oikean numeron! Se oli: " << salanumero << endl;
        }

        turns++;
    }

    cout << "Sinulta meni  " << turns << " arvausta." << endl;

    return 0;
}