#include<bits/stdc++.h>
using namespace std;
using li = long long ;
int main()
{

int t;
cin>>t;
while(t--)
{
    li a,b;
    cin>>a>>b;
    li ans=0, c = 1;
    while(c<b)
    {
        c*=2;
        ++ans;
    }
    
    if(c<a)
    {
        ans+=(a-c+b - 1)/b;
    }
    cout<<ans<<endl;
    
}


    
    return 0;
}