#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b;
    cin>>b;
    int c = b%60; //minutes 
    int c1 = b/60;//hours
    c1%=24;
    int d = (a[4]-48) + (((a[3]-48)*10));
    //cout<<d;
    d+=c;
    if(d>=60)
    {
        d-=60;
        a[1]++;  
    }
        a[3] = (d/10) + 48 ;
        a[4] = (d%10) + 48 ;

    int e = (a[1]-48) + (((a[0]-48)*10));
    e+=c1;
    if(e>=24)
    {
        e-=24;  
    }
        a[0] = (e/10) + 48 ;
        a[1] = (e%10) + 48 ;

    cout<<a;
     




    
    return 0;
}