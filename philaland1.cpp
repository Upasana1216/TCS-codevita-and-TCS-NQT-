#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,np;
    cin>>t;
    while(t--){
        cin>>n;
        p=0;
        
        while(n>0){
            p++;
            n=n/2;
        }

        cout<<p<<endl;
    }

    return 0;
}