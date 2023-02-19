#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout<<(a==0 ? 1 : a+2*b+1)<<endl;
    }
    return 0;

}