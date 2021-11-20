
#include <bits/stdc++.h>
using namespace std;

long long maxN = 1e5;

void seive(vector<bool> &primes)
{
    for (long long num = 2; num * num < maxN; num++)
    {
        if (primes[num])
        {
            for (long long i = num * num;i < maxN; i += num)
                primes[i] = false;
        }
    }
}

long long solve(long long N1,long long N2)
{
    vector<bool> primes(maxN, true);
    primes[1] = false;
    seive(primes);

    vector<string> filteredPrimes;
    vector<long long> comb;
    set<long long> lst;

    for (long long i = N1; i <= N2; i++)
        if (primes[i])
            filteredPrimes.push_back(to_string(i));

    for (long long i = 0;i < (long long)(filteredPrimes.size());i++)
    {
        for (long long j = 0;j < (long long)(filteredPrimes.size());j++)
        {
            if (i == j)
                continue;

            string tmp = filteredPrimes[i] + filteredPrimes[j];
            comb.push_back(stoi(tmp));
        }
    }

    for (long long x : comb)
        if (primes[x])
            lst.insert(x);

    auto it = lst.end();
    it--;

    long long a = *(lst.begin()), b = *it, c;

    for (long long i = 3;i <= (long long)(lst.size());i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main()
{
    long long N1 = 2, N2 = 40;

    cout << solve(N1, N2);

    return 0;
}
