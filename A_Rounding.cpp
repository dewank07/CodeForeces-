#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t;
    cin>>t;
    if(t%10 <=5)
    {
        cout<<t - (t%10);
    }
    else
    {
    cout<<t + (10 - (t%10));

    }


    
    return 0;
}