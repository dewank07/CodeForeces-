#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float d = t;
    int l = 0,k=0 ;
    while(t--)
    {
        int a;
        cin >> a;
        if(a>=1)
            l++;
        else if(a<0)
            k++;

    }
    
    max(k,l)>=ceil(d/2) ? max(k,l)==l ? cout<<1 : cout<<-1 : cout<<0;
    return 0;
}


