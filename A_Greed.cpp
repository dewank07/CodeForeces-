#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    long long int a[t],b[t],sum=0;
    for(int i = 0 ; i < t; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    for(int i = 0 ; i < t; i++)
    {
        cin >> b[i];
    }



    sort(b,b+t);
    int Csum = b[t-1] + b[t-2];
    sum-Csum <= 0 ? cout<<"YES" : cout<<"NO";

    
    return 0;
}


