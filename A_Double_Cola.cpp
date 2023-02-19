#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a ;
    cin >> a ; 
    int b = 1;
    while(b * 5 < a)
    {
        a-= b * 5 ;
        b*=2;
        cout<<a<<" "<<b<<endl;
    }
    string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout<<name[(a-1)/b];



    
    return 0;
}