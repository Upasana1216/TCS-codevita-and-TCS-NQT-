#include <iostream>
using namespace std;

int prime(int b)
{
    int j, cnt;
    cnt = 1;
    for (j = 2; j <= b / 2; j++)
    {
        if (b % j == 0)
            cnt = 0;
    }
    if (cnt == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int i, j, n, cnt, a[25], c, sum = 0, count = 0, k = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        cnt = 1;
        for (j = 2; j <= n / 2; j++)
        {
            if (i % j == 0)
                cnt = 0;
        }
        if (cnt == 1)
        {
            a[k] = i;
            cout<<a[k]<<" ";
            k++;
        }
    }

    for (i = 0; i < k && sum<n; i++)
    {
        sum = sum + a[i];
        c = prime(sum);
        if (c == 1){
            count++;
            //cout<<sum<<endl;
        }
    }
    cout << count;
    return 0;
}