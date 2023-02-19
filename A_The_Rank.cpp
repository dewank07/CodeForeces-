#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,d,sum = 0 ;
        cin >> a >> b >> c >> d;
        sum = a + b + c + d ;
        t--;
    int f = 1;
    while(t--)
    {
        int a1,b1,c1,d1,sum1 = 0 ;
        cin >> a >> b >> c >> d;
        sum1 = a + b + c + d ;
        if(sum<sum1)
        {
            f++;
        }
    }
    cout<<f;



    
    return 0;
}