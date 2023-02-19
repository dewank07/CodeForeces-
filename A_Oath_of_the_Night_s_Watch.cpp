#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    int a[t];
    int c = 0, d = 100007;
    for(int i = 0 ; i < t; i++)
    {
        cin>>a[i];
        c = max(c,a[i]);
        d = min(d,a[i]);
    }
    int f = 0, g = 0 ;
    for(int i = 0 ; i < t ; i++)
    {
        if(a[i]==c)f++;
        if(a[i]==d)g++;
    }
    if(c==d)
    {
        cout<<0;
    }
    else{
        cout<<t-f-g;
    }



    return 0;
}


