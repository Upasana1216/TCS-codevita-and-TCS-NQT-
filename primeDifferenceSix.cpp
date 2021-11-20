
#include <bits/stdc++.h>
using namespace std;


vector<bool> Prime;


void computePrime(int N)
{

	
	Prime.resize(N + 1, true);
	Prime[0] = Prime[1] = false;

	for (int i = 2; i * i <= N; i++) {
		if (Prime[i]) {
			for (int j = i * i; j < N; j += i) {
				Prime[j] = false;
			}
		}
	}
}


int countSixPairs(int arr[], int n)
{

	int maxE = *max_element(arr, arr + n);

	computePrime(maxE);

	int count = 0;

	int freq[maxE + 1] = { 0 };

	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {

		
		if (Prime[arr[i]]) {
			if (freq[arr[i] + 6] > 0  && Prime[arr[i] + 6]) {
				count++;
			}
		}
	}

	return count;
}


int main()
{
	int arr[] = { 6, 7, 5, 11, 13 };
	int n = sizeof(arr) / sizeof(arr[0]);

	
	cout << countSixPairs(arr, n);
	return 0;
}
