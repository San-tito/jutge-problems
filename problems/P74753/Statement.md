# The lost sequence

As it is well known by the supporters of the series LOST, the following
six numbers are keys in the Valenzetti equation, a mathematical formula
to predict the end of humanity.

![image](lost.png){width="10cm"}

Dharma Iniciative, whose aim is to change the factors that would bring
to the decline of humanity, has made the following program to generate
the $n$ first terms of what they call the *lost sequence*.

        int f(int i) {
            if (i == 0) return -3;
            if (i == 1) return -1;
            if (i == 2) return  4;
            if (i == 3) return  8;
            if (i == 4) return 15; 
            return f(i-5) + f(i-3) + f(i-1);
        }


        int main() {
            int n;
            while (cin >> n) {
                for (int i = 0; i < n; ++i) cout << f(i) << " ";
                cout << "..." << endl;
            }
        }

Unfortunately, this program is much too slow. Help Dharma Iniciative to
save the world by writing an equivalent but much faster program.

## Input

Input consists of a sequence of natural numbers between 0 and 45.

## Output

Print the same as the given program.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

