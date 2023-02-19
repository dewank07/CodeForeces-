#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    for( int i = 0; i < t ; i++)
    {
        if( a[i]=='n')
        {
            cout<< "1 ";
        }
        else if(a[i] == 'z')
        {
            cout<<"0 ";
        }
    }




    
    return 0;
}