// CPP program to find the number of occurrences
// of a character at position P upto p-1
#include <bits/stdc++.h>
using namespace std;

// Function to find the number of occurrences
// of a character at position P upto p-1
int countOccurrence(string s, int position)
{
	int alpha[26] = { 0 }, b[s.size()] = { 0 };

	// Iterate over the string
	for (int i = 0; i < s.size(); i++) {
		// Store the Occurrence of same character
		b[i] = alpha[(int)s[i] - 97];

		// Increase its frequency
		alpha[(int)s[i] - 97]++;
	}

	// Return the required count
	return b[position - 1];
}

// Driver code
int main()
{
	string s = "ababababab";

	int p = 9;

	// Function call
	cout << countOccurrence(s, p);

	return 0;
}
