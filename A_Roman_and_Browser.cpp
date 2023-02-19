#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c[a];
   long int sum = 0, s =0, d =-10000007 ;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> c[i];
        sum+=c[i];
    }
    for(int i = 0 ; i < b ; i++ )
    {
        s=sum;
        for(int j = i ; j < a ;j+=b)
        {
            s-=c[j];
        }
        d = max(d,abs(s));
    }
   cout<<d;




    return 0;
}


