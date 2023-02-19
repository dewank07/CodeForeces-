#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    if(t%4 == 1)
    {
        cout<<"0 A";
    }
    else if(t%4 == 2)
    {
        cout<<"1 B";
    }
    else if(t%4 == 3)
    {
        cout<<"2 A";
    }
    else{
        cout<<"1 A";
    }




    
    return 0;
}