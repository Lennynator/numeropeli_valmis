#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int valitsenumero(int lowerBound, int upperBound) {
    return rand() % (upperBound - lowerBound + 1) + lowerBound;
}

int arvaus(int lowerBound, int upperBound) {
    int arvauus;
    while (true) {
        cout << "Arvaa numero: ";
        cin >> arvauus;

        if (arvauus < lowerBound || arvauus > upperBound) {
            cout << "Anna numero valilla (" << lowerBound << " ja " << upperBound << ")." << endl;
        }
        else {
            return arvauus;
        }
    }
}

// Function to play the game
void pelataan() {
    int alin, ylin;
    int salanumero;
    int arvaaus = 0;
    int turns = 0;

    cout << "Anna alaraja ";
    cin >> alin;

    cout << "Anna ylaraja: ";
    cin >> ylin;

    if (alin >= ylin) {
        cout << "Raja ei toimi. Varmista, etta ylin ei ole pienempi kuin alin" << endl;
        return;
    }

    salanumero = valitsenumero(alin, ylin);

    cout << "Arvaa numero valilla " << alin << " ja " << ylin << endl;

    while (arvaaus != salanumero) {
        arvaaus = arvaus(alin, ylin);

        
        if (arvaaus < salanumero) {
            cout << "Liian pieni. Arvaa uudestaan" << endl;
        }
        else if (arvaaus > salanumero) {
            cout << "Liian suuri. Arvaa uudestaan" << endl;
        }
        else {
            cout << "Onnittelut! Arvasit oikean numeron. Se oli: " << salanumero << endl;
        }

        turns++;
    }

    cout << "Sinulta meni " << turns << " arvausta." << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    pelataan();

    return 0;
}