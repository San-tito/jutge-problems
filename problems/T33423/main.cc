#include <iostream>
#include <sstream>
#include "assert.hh"
#include "matrius.hh"
using namespace std;

/**
 * @brief Calcula la suma de dues MatriuEsparsa.
 *
 * @param A MatriuEsparsa de A.files.size() files i A.ncols columnes.
 * @param B MatriuEsparsa de B.files.size() files i B.ncols columnes.
 *
 * @pre A i B són matrius esparses correctes. Les dimensions d'A i B són iguals.
 *
 * @post Retorna una nova MatriuEsparsa C on C.files[i] és la suma de
 *       A.files[i] i B.files[i], conservant només els elements no nuls,
 *       ordenats per columna ascendentment.
 */
MatriuEsparsa suma_matrius_esparses(const MatriuEsparsa& A, const MatriuEsparsa& B);

//

MatriuEsparsa matriu_esparsa_llegeix() {
    // Llegim dimensions de la primera línia
    int n, ncols;
    cin >> n >> ncols;
    string linia;
    getline(cin, linia); // Consumim fins al final de línia

    // Llegim les files
    MatriuEsparsa S = {ncols, vector<list<Casella>>(n)};
    for (int i = 0; i < n; ++i) {
        getline(cin, linia);
        istringstream iss(linia);
        char c;
        while (iss >> c && c != '.') {
            // c == '('
            int pos, valor;
            char comma, close;
            iss >> pos >> comma >> valor >> close;
            S.files[i].push_back({pos, valor});
        }
    }
    return S;
}

void matriu_esparsa_escriu(const MatriuEsparsa& S) {
    // Mostrem dimensions
    cout << int(S.files.size()) << " " << S.ncols << "\n";

    // Mostrem files
    for (int i = 0; i < int(S.files.size()); ++i) {
        bool primer = true;
        for (const Casella& c : S.files[i]) {
            if (!primer) {
                cout << " ";
            }
            cout << "(" << c.pos << "," << c.valor << ")";
            primer = false;
        }
        cout << ".\n";
    }
}

int main() {
    MatriuEsparsa A = matriu_esparsa_llegeix();
    MatriuEsparsa B = matriu_esparsa_llegeix();
    try {
        MatriuEsparsa C = suma_matrius_esparses(A, B);
        matriu_esparsa_escriu(C);
    } catch (const AssertError& err) {
        //
        // Quan es crida assert, el codi salta aquí, obtenint l'objecte
        // `AssertError` llençat per `assert`. Aquí només es comprova que
        // el missatge donat a la funció sigui l'esperat.
        //
        string reason = err.reason();
        if (reason == "suma_matrius_esparses: dimensions diferents!") {
            cout << "`assert` disparat i amb el missatge correcte" << endl;
        } else {
            cout << '"' << reason << '"' << endl;
            cout << "El missatge d'`assert` no té el text correcte" << endl;
            throw err;
        }
    }
}
