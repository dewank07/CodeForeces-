#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    int b=0;
    while(k!=0)
    {
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(v[i]>=v[i+1])
            {
                b++;
            }
            else
            {
                k--;
                if(k==0)
                {
                    break;
                }
                b=0;
                v[i]++;
                break;
            }
        }
        if(b==n-1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }

    cout<<b+1<<endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}