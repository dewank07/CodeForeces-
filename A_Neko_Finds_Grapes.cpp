#include<bits/stdc++.h>
using namespace std;


int main()
{   
    int n,m;
    cin>>n>>m;
    int a,b,c1=0,c2=0,k1=0,k2=0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int flag=0;
    for(int i = 0 ; i < m ; i++)
    {
        cin>>b;
        if(b%2==0)
        {
            k1++;
        }
        else
        {
            k2++;
        }
        
    }
     cout<<min(k2,c1)+min(k1,c2);
    
    return 0;
}