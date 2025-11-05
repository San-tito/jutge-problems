# Rectangle contenidor

Utilitzant les definicions

        typedef vector<char> Fila;
        typedef vector<Fila> Rectangle;

feu un procediment

        void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols);

que calculi el nombre de files \@fils@ i el nombre de columnes \@cols@
del subrectangle més petit de costats horizontals i verticals que
contingui totes les aparicions de \@c@ en \@r@.

## Precondició

El caràcter \@c@ apareix almenys un cop a \@r@, el qual realment és un
rectangle. És a dir, totes les files tenen el mateix nombre de
caràcters.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Autor

Salvador Roura

© Jutge.org, 2006--2025.

