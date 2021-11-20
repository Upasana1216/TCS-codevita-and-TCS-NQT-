
#include <bits/stdc++.h>
using namespace std;

void printGalaxy(vector<vector<char> > mat, int n)
{

	// Iterate the matrix column-wise
	for (int i = 0; i < n; i++) {

		// If all '#' is encountered
		// in the given column, print '#'
		if (mat[0][i] == '#'
			&& mat[1][i] == '#'
			&& mat[2][i] == '#') {
			cout << '#';
		}

		// If all '.' is encountered in
		// the given column, skip the
		// current column
		else if (mat[0][i] == '.'
				&& mat[1][i] == '.'
				&& mat[2][i] == '.') {
		}

		// If above cases fail
		else {

			char a, b, c, a1, b1;
			char c1, a2, b2, c2;
			int x1 = i;
			a = mat[0][x1];
			b = mat[0][x1 + 1];
			c = mat[0][x1 + 2];
			a1 = mat[1][x1];
			b1 = mat[1][x1 + 1];
			c1 = mat[1][x1 + 2];
			a2 = mat[2][x1];
			b2 = mat[2][x1 + 1];
			c2 = mat[2][x1 + 2];

			// Check if the arrangement
			// of '.' and '*' forms
			// character 'A'
			if (a == '.' && b == '*'
				&& c == '.' && a1 == '*'
				&& b1 == '*' && c1 == '*'
				&& a2 == '*' && b2 == '.'
				&& c2 == '*') {

				// If true, print A
				cout << "A";

				// Increment column number
				i = i + 2;
			}

			// Check if the arrangement
			// of '.' and '*' forms
			// character 'E'
			if (a == '*' && b == '*'
				&& c == '*' && a1 == '*'
				&& b1 == '*' && c1 == '*'
				&& a2 == '*' && b2 == '*'
				&& c2 == '*') {

				// If true, print E
				cout << "E";

				// Increment column number
				i = i + 2;
			}

			// Check if the arrangement
			// of '.' and '*' forms
			// character 'I'
			if (a == '*' && b == '*'
				&& c == '*' && a1 == '.'
				&& b1 == '*' && c1 == '.'
				&& a2 == '*' && b2 == '*'
				&& c2 == '*') {

				// If true, print I
				cout << "I";

				// Increment column number
				i = i + 2;
			}

			// Check if the arrangement
			// of '.' and '*' forms
			// character 'O'
			if (a == '*' && b == '*'
				&& c == '*' && a1 == '*'
				&& b1 == '.' && c1 == '*'
				&& a2 == '*' && b2 == '*'
				&& c2 == '*') {

				// If true, print O
				cout << "O";

				// Increment column number
				i = i + 2;
			}

			// Check if the arrangement
			// of '.' and '*' forms
			// character 'U'
			if (a == '*' && b == '.'
				&& c == '*' && a1 == '*'
				&& b1 == '.' && c1 == '*'
				&& a2 == '*' && b2 == '*'
				&& c2 == '*') {

				// If True, print U
				cout << "U";

				// Increment column number
				i = i + 2;
			}
		}
	}
}


int main()
{
	int N = 18;

	
	vector<vector<char> > mat
		= { { '*', '.', '*', '#', '*', '*', '*', '#', '*','*', '*', '#', '*', '*', '*', '.', '*', '.' },
			{ '*', '.', '*', '#', '*', '.', '*', '#', '.','*', '.', '#', '*', '*', '*', '*', '*', '*' },
			{ '*', '*', '*', '#', '*', '*', '*', '#', '*','*', '*', '#', '*', '*', '*', '*', '.','*' } };

	printGalaxy(mat, N);

	return 0;
}
