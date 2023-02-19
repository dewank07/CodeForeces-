#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c[b];
    int d = a + (b-(a%b));
    int e = a/b;
    for(int i=0;i<b;i++)
    {
        c[i]=e;
    }
    if(d-a>0)
    {
        for(int i=0;i<d-a;i++)
        {
            c[i]--;
        }
    }
    for(int i=0;i<b;i++)
    {
        cout<<c[i]+1<<" ";
    }
    

    return 0;
}