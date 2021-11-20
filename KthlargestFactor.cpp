
#include <iostream>
using namespace std;


int KthLargestFactor(int N, int K)
{
	if(K==1)
		return N;
	
	for (int i = N/2; i > 0; i--) {


		if (N % i == 0)
			K--;

		if (K == 1) {
			return i;
		}
	}

	return -1;
}


int main()
{
	int N = 30, K = 2;
	cout << KthLargestFactor(N, K);
}
