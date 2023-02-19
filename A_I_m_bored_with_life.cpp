#include<bits/stdc++.h>
using namespace std;
long int fact(int t)
{
    long int fact=1;
    for(int i=1;i<=t;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
     int a,b;
     cin>>a>>b;
     if(a<b)
      cout<<fact(a);
    else
        cout<<fact(b);
        
    return 0;
}