#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long arr[100010];
long long brr[100010];

int main()
{
  int test_case;
  cin >> test_case;
  for (int i = 1; i <= test_case; i++)
  {
    int n;
    long long gift = 0, temp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i]; //1 2 1 5 2
    }
    brr[0] = 1;  //1 2 1 2 1
    for (int i = 1; i < n; i++)
    {
      if (arr[i] > arr[i - 1]) //2>1 1>2 5>1
      {
        brr[i] = brr[i - 1] + 1; // 1+1 =2 
      }
      else
      {
        brr[i] = 1; 
      }
    }
    gift = brr[n - 1];  //1
    for (int i = n - 2; i >= 0; i--)
    {
      if (arr[i] > arr[i + 1]) //5>2

      {
        temp = brr[i + 1] + 1; //temp=2
      }
      else
        temp = 1;
      gift = gift + max(temp, brr[i]); //max(2,2) gift=1+2 =3
      brr[i] = temp; 
    }
    cout << gift << endl;
  }
  return 0;
}