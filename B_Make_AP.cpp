#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
       if((b-a) ==  (c-b) || (a==b) && (b==c)) 
       {
           cout<<"YES"<<endl;
       }
       else if( (2*b-a)%c==0 && 2*b-a > 0 )
       {
           cout<<"YES"<<endl;
       }
       else if( (2*b-c)%a==0 && 2*b-c > 0 )
       {
           cout<<"YES"<<endl;
       }
       else if( (a+c)%(2*b)==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}