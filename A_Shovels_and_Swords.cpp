#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long  a,b;
        cin >> a >> b;
        long long k = min(a,b);
        cout<<min(k,(a+b)/3)<<endl;
    }
    return 0;
}