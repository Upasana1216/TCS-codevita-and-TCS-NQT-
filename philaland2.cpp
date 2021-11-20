
#include <bits/stdc++.h>
using namespace std;


int findMinDenomin(int n)
{
	return log2(n) + 1;
}

int main()
{
	int n = 10;
	cout << findMinDenomin(n);
	return 0;
}
