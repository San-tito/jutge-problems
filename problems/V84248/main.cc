#include <set>

#if __has_include("program.hh")
#include "program.hh"
#else
#if __has_include("Arbre.hh")
#include "Arbre.hh"
#endif
#endif

#include "Arbre-io.hh"
using namespace std;

set<string> leer_productos() {
    set<string> resultado;
    string prod;
    while (cin >> prod and prod != "#") {
        resultado.insert(prod);
    }
    return resultado;
}

int main() {
	Arbre<string> tienda = leer_arbol_string();
	set<string> productos = leer_productos();

	Arbre<string> subarbol;
	subarbol.crear_subarbol(tienda, productos);

	escribir_arbol(subarbol);
}
