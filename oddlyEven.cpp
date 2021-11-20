#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int odd = 0,even = 0,n;
    string num;
   
    cin>> num;
    n = num.size();  //4567
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            odd+=num[i]-48;  //'1' -> ascii   0-9 48   52-48 = number 4
            //0-> 48
            //1-? 49
           // 2-> 50
          
            
        }
        else
        {
            even+=num[i]-48;
           
            
        }
    }
    cout<< abs(odd-even);

    return 0;
}