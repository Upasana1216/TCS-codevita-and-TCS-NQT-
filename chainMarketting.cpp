#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    //upasana 
    string par;
    cin >> par; //upasana
    string x; 
    cin >> x; //Y
    if (x == "N") {
        cout << "TOTAL MEMBERS:1\n";
        cout << "COMISSION DETAILS\n";
        cout << par << ":250 INR\n";
    } else {
        string child; //rkocy,vishal
        cin >> child;
        vector<string> v;// [rocky][vishal]
        string temp = "";
        for (int i = 0; i < child.length(); i++) { //rocky,vishal
            if (child[i] == ',') {
                v.push_back(temp);  //[rocky]
                temp = "";
            }
            else  if (child[i] != ' ')
                temp += child[i]; //vishal
        }
        v.push_back(temp); //[rocky][vishal] 2
        cout << "TOTAL MEMBERS:" << v.size() + 1 << "\n";
        cout << "COMISSION DETAILS\n";
        cout << par << ":" << v.size() * 500 << " INR\n";
        for (auto a : v) { 
            cout << a << ":" << "250 INR\n";
      }
   }
}