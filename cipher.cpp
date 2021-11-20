#include <bits/stdc++.h>
using namespace std;

void ceaser(string s, int key)
{
    //Upasan90 1
    if (key == 0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        { //Upasana90

            if (isdigit(s[i]))
            {
                if (s[i] + key <= 57) //9+1 -> 57+1 58
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 57; //58 -57 1
                    s[i] = 47 + left;             //47+1 48=0
                }
            }
            else if (s[i] >= 65 && s[i] <= 90) // A-Z 65-90
            {
                if (s[i] + key <= 90)  // 90+1 =85<90
                {
                    s[i] = s[i] + key; //S[I]=V
                }
                else
                {
                    int left = (s[i] + key) - 90; // 91-90
                    s[i] = 64 + left; //64+1 65
                }
            }
            else if (s[i] >= 97 && s[i] <= 122) //p
            {
                if (s[i] + key <= 122) //p+1
                {
                    s[i] = s[i] + key; //s[i]=q
                }
                else
                {
                    int left = (s[i] + key) - 122;
                    s[i] = 96 + left;
                }
            }
        }
    }
    cout << "The Encrypted Text is:" << s;
}

int main()
{
    string s; //Upasan90
    int key;  //1

    cout << "Enter the plain text :";
    getline(cin, s);

    cout << "\nEnter the key :";
    cin >> key;

    ceaser(s, key);
    return 0;
}