#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int secretNumber = rand() % 100 + 1; 
    int userGuess = 0;
    int turns = 0;

    cout << "Arvaa luku (1-100)" << endl;

    while (userGuess != secretNumber) {
        cout << "Anna numero: ";
        cin >> userGuess;
        

        if (userGuess < secretNumber) {
            cout << "Liian matala! Arvaa uudestaan." << endl;
        }
        else if (userGuess > secretNumber) {
            cout << "Liian korkea! Arvaa uudestaan!" << endl;
        }
        else {
            cout << "Arvasit oikein!" << endl;
        }
        turns++;
    }  
    cout << "Teit " << turns << " arvausta." << endl;

    return 0;
}