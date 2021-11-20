#include<iostream>
#include<bits/stdc++.h>

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

int main(){

    int n;
    cin>>n;
    vector<bool> primes(maxN, true);
    primes[1] = false;
    seive(primes);

    vector<int> fp;

    for (long long num = 2; num< n; num++){
        if(primes[num]){
            fp.push_back(num);
            cout<<fp[num]<<" ";
        }
    }
    
    long long int sum=0,c=0,count=0;
    for(int i=1;i<fp.size();i++){

        sum+=fp[i-1];

        if(primes[sum]){
            //cout<<sum;
            count++;
        }
    }

    cout<<count<<endl;

}