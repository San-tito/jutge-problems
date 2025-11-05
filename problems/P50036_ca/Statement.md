# Regla de Horner

Sigui $p[0\dots n]$ un vector d'enters que conté els coeficients d'un
polinomi de grau $n\ge0$. Per exemple, el vector
$p=\langle3,2,5,-1\rangle$ representa $p(x)=3+2x+5x^2-x^3$, un polinomi
de grau $n=3$.

Escriviu una funció

        int avalua(const vector<int>& p, int x);

que avaluiï el polinomi al punt \@x@, és a dir, que retorni
$\sum_{i=0}^n p[i]x^i$.

Utilitzeu la Regla de Horner:
$$p_nx^n+p_{n-1}x^{n-1}+\dots+p_0=((p_nx+p_{n-1})x+\dots)x+p_0.$$

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Autor

Jordi Petit

© Jutge.org, 2006--2025.

