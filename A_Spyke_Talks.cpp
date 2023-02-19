#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    long long a[1000];
    for(int i = 0 ; i < t ; i++)
    {
        cin >> a[i];
    }
    sort(a,a+t);
    int b = 0;
    for(int i = 1 ; i < t ; i++ )
    {
        if(a[i]!=0 && a[i]==a[i-1])
        {
            b++;
            if(i+1 < t && a[i]==a[i+1])
            {
                b = -1;
                break;
            }
        }
    }
    cout<<b;
    return 0;
}