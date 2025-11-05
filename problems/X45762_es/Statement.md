# Dibujar imágenes en una pizarra (en modo carácter)

En este ejercicio os damos un programa a medio hacer que hay que
completar. El programa trabaja con imágenes que queremos dibujar sobre
una pizarra.

Más concretamente, tendremos un tipo de datos `Image`, que consiste en
un nombre, una profundidad, una ubicación representada por dos naturales
$i,j$ y un vector de strings $v$. Usualmente llamaremos `image` a las
variables de tipo `Image`.

Una pizarra será un vector de strings que típicamente llamaremos
`board`.

Decimos que una `image` es válida si su `v` es una matriz rectangular de
ciertas dimensiones $n\times{}m$ no nulas.

Decimos que un `board` es válido si es una matriz rectangular de ciertas
dimensiones $N\times{}M$ no nulas.

Además, decimos que esta `image` encaja dentro del `board` si
$i+n\leq N$ y $j+m\leq M$, donde $i,j$, es la ubicación de esa `image`.

El resultado de dibujar `image` sobre el `board` consiste en modificar
`board` de manera que, para cada posición $i',j'$ de `image` con un
caracter diferente de `’.’`, se cumpla que
`board`$[i+i'][j+j'] ==$`image`$[i'][j']$. Ningún otro caracter de
`board` deberá ser alterado.

La función `main`, que ya se da hecha, lee una lista de imágenes, las
ordena de mayor a menor produndidad, y las dibuja sobre una pizarra por
ese orden.

Tendréis que implementar una función que lea una imagen de la entrada,
una para calcular las dimensiones mínimas de una pizarra que hacen que
todas las imágenes encajen en ella, y una función para dibujar una
imagen sobre la pizarra. Además, tendréis que implementar una función
que compara imagenes y se usa para ordenarlas. Una imagen es \"menor
que\" otra si tiene mayor profundidad que la otra, o tiene la misma
profundidad pero su nombre es menor que el nombre de la otra en orden
lexicográfico.

Completad el siguiente código a medias para solucionar el ejercicio:

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    // Here you can add more includes if you wish.
    // ...

    using namespace std;

    struct Image {
    	string name;
    	int depth;
    	int i, j;
    	vector<string> v;
    };

    typedef vector<Image> ListImages;

    // Auxiliary functions (you can add more functions if you wish)

    // Pre: The input has a description of an image with this format:
    //      - First line: name depth i j n m
    //      - n lines with m characters each (the contents of v)
    //        These characters are different from whitespace, as we use '.' to represent empty character.
    Image readImage()
    {
    	// Implement this function.
    	//...
    }

    // Pre: listimages contains a non-empty list of valid images.
    // Post: N,M are the dimensions of the minimum board such that
    //       all of those images fit in it.
    //       In other words, N,M must be the minimum naturals satisfying that,
    //       for each image in listimages,
    //       if i,j are its location and n,m are the dimensions of its v,
    //       then i+n<=N and j+m<=M must be satisfied,
    void computeMinimumBoardDimensions(const ListImages &listimages, int &N, int &M) {
    	// Implement this function.
    	//...
    }

    // Pre:  image is valid and board is valid and image fits in board.
    // Post: image has been drawn on board. Nothing else has changed.
    //       Recall that occurrences of character '.' in image are not printed on board!
    void drawImage(const Image &image, vector<string> &board)
    {
    	// Implement this function.
    	//...
    }

    // Pre:  image1, image2 represent valid images.
    // Post: Returns true iff one of the following conditions holds:
    //         - depth of image1 is strictly bigger than depth of image2.
    //         - image1 and image2 have same depth, but image1 has smaller name than image2.
    bool compareImages(Image image1, Image image2)
    {
    	// Implement this function.
    	//...
    }

    // Pre: listimages has a list of valid images.
    // Post: prints on the output the result of drawing all of those
    //       images on the minimum board such that all of them fit in,
    //       and sorted by depth and name.
    void drawListImages(const ListImages &listimages)
    {
    	sort(listimages.begin(), listimages.end(), compareImages);
    	int N, M;
    	computeMinimumBoardDimensions(listimages, N, M);
    	vector<string> board(N, string(M, '.'));
    	for (int i = 0; i < int(listimages.size()); i++)
    		drawImage(listimages[i], board);
    	for (int i = 0; i < N; i++)
    		cout << board[i] << endl;
    	cout << endl;
    }

    int main()
    {
    	int n;
    	cin >> n;
    	ListImages listimages(n);
    	for (int i = 0; i < n; i++)
    	listimages[i] = readImage();
    	drawListImages(listimages);
    }

## Entrada

La entrada consiste en la descripción de una lista de imágenes. No hay
que preocuparse mucho de esto porque el `main` que os damos ya se
encarga de llamar a las funciones correspondientes para tratar esta
entrada.

## Salida

La salida muestra el resultado de escribir las imágenes sobre la pizarra
por orden de profundidad y nombre. No hay que preocuparse mucho sobre
esto porque el `main` que os damos ya se encarga de producir esta salida
llamando a las funciones correspondientes.

## Autor

PRO1

© Jutge.org, 2006--2025.

