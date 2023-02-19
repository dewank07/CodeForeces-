#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    int a[t];
    for(int i = 0; i < t; i++) cin>>a[i];

    int u;
    cin>>u;
    int b[u];
    for(int i = 0; i < u; i++) cin>>b[i];

    sort(a,a+t);
    sort(b,b+u);
    cout<<a[t-1]<<" "<<b[u-1];


    
}