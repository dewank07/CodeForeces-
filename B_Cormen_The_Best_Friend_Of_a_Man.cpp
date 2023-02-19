#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b,k=0;
    cin >> a >> b;
    int v[a];
    for(int i = 0 ; i < a ; i++)
    {
        cin >> v[i];
    }

    for(int i = 1 ; i < a ;)
    {
        if(v[i-1]+v[i]>=b)
        {
            i++;
        }
        else{
            k += b - (v[i-1] + v[i]);
            v[i] += b - (v[i-1] + v[i]);
        }
    }
    
    cout<<k<<endl;
    for(int i = 0 ; i < a; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}