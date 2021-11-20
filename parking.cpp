#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int r,c,a,sum=0,m=INT_MIN,in=0;
    cin>>r>>c; 
 // 3  3
    //0 0 0
    //1 1 1
    //0 1 1
    for(int i=0;i<r;i++) //0 2
    {
        for(int j=0;j<c;j++)  //0 2
        {
            cin>>a;  //1 
            sum+=a; // sum=1
        }
        if(sum>m)  //0> INT_MIN
        {
            m=sum;  //m=0
            in=i+1;  //1
        }
        sum=0;  //0
    }
    cout<<in;
}