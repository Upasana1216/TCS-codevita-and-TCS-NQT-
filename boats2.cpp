#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, m;
    int e = 0, o = 0;
    cin >> n >> m;

    multiset<int> pe;
    vector<int> bo;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        pe.insert(j);
        o = max(o, j); 
    }

    for (i = 0; i < m; i++)
    {
        cin >> j;
        bo.push_back(j);
    }
    sort(bo.begin(), bo.end());
    if (bo[m - 1] < o)
    {
        cout << "()" << endl;
        return 0;
    }
    while (!pe.empty()) // 8 7 6 4 7->      it
    {
        for (i = m - 1; i >= 0; i--) // 8 11
        {
            if (pe.empty())
                break;
            if (bo[i] < (*pe.begin())) //8 < 4
                break;
            auto it = pe.upper_bound(bo[i]); //11 -> 4, 8-> 
            it--; //8
            pe.erase(it);
        }

        e += 2; //e=2+2 => 4+2 => 6
    }
    cout << e - 1 << endl; //5
}