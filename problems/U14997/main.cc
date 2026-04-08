#include <iostream>
#include <string>
using namespace std;

struct Jugador {
    string nom;
    int punts;
    int ranking;
};

// Llegeix un jugador de l'entrada.
// Retorna cert si s'ha llegit correctament, fals si s'ha arribat a "---".
bool llegeix_jugador(string& codi, string& nom, int& punts) {
    cin >> codi;
    if (codi == "---") return false;
    cin >> punts;
    // std::ws és un manipulador que descarta els espais en blanc del flux
    getline(cin >> ws, nom);
    return true;
}

int main() {}
