#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        if(d<=n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int e;
        bool yes = false;
        for(int i = 1 ; i <= n/2 ; i++)
        {
            e = ceil(float(d)/(i+1));
            if(e+i<=n)
            {
                yes = true;
                break;
            }
        }
        if(yes)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}