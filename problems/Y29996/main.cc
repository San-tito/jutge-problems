#include <iostream>
#include "matrius.hh"
using namespace std;

/**
 * @brief Converteix una Matriu en una MatriuEsparsa.
 *
 * @param M Matriu rectangular de mida n x m.
 *
 * @pre M pot ser qualsevol matriu rectangular (incloent buida).
 * @post Retorna una MatriuEsparsa S amb S.ncols == m i S.files.size() == n,
 *       on S.files[i] conté, ordenades per columna ascendentment, les caselles
 *       {pos, valor} dels elements no nuls de la fila i de M.
 */
MatriuEsparsa matriu_converteix_a_esparsa(const Matriu& M);

//

Matriu matriu_llegeix() {
    int n, m;
    cin >> n >> m;
    Matriu M(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> M[i][j];
    return M;
}

void matriu_esparsa_escriu(const MatriuEsparsa& S) {
    cout << int(S.files.size()) << " " << S.ncols << "\n";
    for (int i = 0; i < int(S.files.size()); ++i) {
        bool primer = true;
        for (const Casella& c : S.files[i]) {
            if (!primer) cout << " ";
            cout << "(" << c.pos << "," << c.valor << ")";
            primer = false;
        }
        cout << ".\n";
    }
}

int main() {
    Matriu M = matriu_llegeix();
    MatriuEsparsa S = matriu_converteix_a_esparsa(M);
    matriu_esparsa_escriu(S);
}
