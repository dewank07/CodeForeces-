#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k ;
        cin >> k;
        
        int a[k]
        for(int i = 0 ; i < k ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+k);
        if(a[k-1]-a[k-2]>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;

}