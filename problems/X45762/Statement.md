# Draw images on a board (in character mode)

In this exercise we give you an incomplete program which you have to
finish. The program works with images which we want to draw on a board.

In particular, we'll have a data type `Image`, which has a name, a
depth, a position represented by two natural numbers $i,j$ and a vector
of strings $v$. Usually we will call `image` to variables with type
`Image`.

A board will be a vector of strings which we will usually call `board`.

We say that an `image` is valid if its vector $v$ is a rectangular
matrix with some non-zero dimensions $n\times{}m$.

We say that a `board` is valid if it is a rectangular matrix of some
non-zero dimensions $N\times{}M$.

Additionally, we say that an `image` fits within `board` if $i+n\leq N$
and $j+m\leq M$, where $i,j$ is the position of the `image`.

The result of drawing an `image` on the `board` consists of modifying
`board` in such a way that, for each `image`'s position $i',j'$, with a
character different than `’.’`, it is true that
`board`$[i+i'][j+j'] ==$`image`$[i'][j']$. No other character in the
`board` should be changed.

The `main` function, for which we provide an implementation, reads a
list of images, sorts them by descending depth, and draws them on a
board in that order.

You will have to implement a function to read an image at the input,
another one to compute the minimum dimensions of the board which make
all images fit within it, and another one to draw an image on the board.
Also, you will have to implement a function which compares two images,
to be used in the sorting process. An image is \"less than\" another if
it has a higher depth, or has the same depth but its name is less than
the name of the other in lexicographic order.

Complete the following code to solve the exercise:

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

## Input

The input consists of a list of images. There is no need to worry much
about this since the given `main` function already calls the appropriate
functions to manage it.

## Output

The output shows the result of writing the images on the board ordered
by depth and name. You don't have to worry about this since the given
`main` function already produces this output by calling the
corresponding functions.

## Author

PRO1

© Jutge.org, 2006--2025.

