# Centro de masas de partículas que se mueven a velocidad constante

**Preliminares**

En este ejercicio implementaremos un programa que escribe números reales
por la salida. Debido a problemas de formato y eficiencia de `cin` y
`cout` cuando trabajan con números reales, conviene hacer algunas cosas
que mencionamos a continuación.

Al principio de la función `main` debéis poner estas instrucciones:

    	ios::sync_with_stdio(false);
    	cin.tie(0);    
    	cout.setf(ios::fixed);
    	cout.precision(5);

Para escribir reales por la salida, conviene que incluyáis y uséis esta
función:

    void printDouble(double d)
    {
    	if (abs(d) < 1e-7)
    		cout << 0.0;
    	else
    		cout << d;
    }

Por último, y no por ello menos importante, no uséis `endl` para
escribir saltos de linea. Usad `’\n’` en su lugar. Es decir:

    	// This line has been replaced with next one:
    	// cout << endl;
    	cout << '\n';

**Ejercicio**

**Nota:** En este ejercicio hablaremos de posiciones de partículas en un
sistema 3-dimensional, y de sus velocidades y masas. El sistema de
referencia y unidades no es demasiado relevante, siempre y cuando se
escoja uno de más o menos estandar y razonable. Por si alguien siente la
necesidad, os podéis imaginar que hablamos de metros, segundos, metros
por segundo y kilogramos.

Tenemos como entrada la posición, velocidad y masa de $n$ partículas
$(p_1,v_1,m_1),\ldots,(p_n,v_n,m_n)$. En particular, la primera
partícula se encuentra en posición $p_1$ en tiempo $0$, se desplaza a
velocidad constante $v_1$, y tiene masa $m_1$. Se supone que todo se
expresa en un sistema cartesiano de coordenadas en tres dimensiones.

También tenemos como entrada $k$ valores de tiempo $t_1,\ldots,t_k$.

Tendremos que determinar el centro de masas de las $n$ partículas
después de $t_1$ unidades de tiempo, después de $t_1+t_2$ unidades de
tiempo, después de $t_1+t_2+t_3$, ..., después de $t_1+\cdots+t_k$
unitades de tiempo.

Es obligatorio usar coherentemente las siguientes declaraciones de
tipos, y implementar y utilizar coherentemente las siguientes funciones.
En caso contrario, se invalidará la entrega. Podéis declarar más tipos
de datos y implementar más funciones si queréis, y de hecho es
recomendable hacerlo.

    struct Point {
    	double x, y, z;
    };

    struct Particle {
    	Point p,v;
    	double m;
    };

    // Pre:
    // Post: returns the sum of p1 and p2.
    Point sum(Point p1, Point p2)
    {
    	//...
    }

    // Pre:
    // Post: returns a times p.
    Point mul(double a, Point p)
    {
    	//...
    }

**Nota:** Os recomendamos empezar haciendo una implementación sencilla
con el fin de superar los juegos de pruebas públicos, y tratar después
de optimizarla con el fin de superar también los juegos de pruebas
privados.

## Entrada

La entrada tiene varios casos. Cada caso comienza con dos naturales
positivos $n, k$ en una primera linea. Después vienen $n$ lineas, cada
una describiendo la posición (tres enteros), velocidad (tres enteros) y
masa (un natural positivo) de una partícula. Finalmente vienen $k$
lineas, cada una con un natural positivo que representa un tiempo
transcurrido.

## Salida

Para cada caso, primero se han de escribir $k$ lineas, donde la
$i$-ésima linea continene el centro de masas (tres reales redondeados a
5 dígitos después del punto decimal) de todas las partículas después de
la suma de los $i$ primeros tiempos. Finalmente, se han de escribir $n$
lineas, con las posiciones (tres reales redondeados a 5 dígitos después
del punto decimal) de las partículas después de la suma de todos los
instantes de tiempo. Cada caso viene seguido de una linea en blanco.

## Observación

Evaluación sobre 10 puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos como solución rápida una que es correcta, de coste lineal y
capaz de superar los juegos de pruebas públicos y privados. Entendemos
como solución lenta una que no es rápida, pero es correcta y capaz de
superar los juegos de pruebas públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

