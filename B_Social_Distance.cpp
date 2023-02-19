#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool solve()
{
    ll n,m;
    cin >> n >> m; 
    vector<ll> v(n);
    ll sum = 0;
    for(int i = 0 ; i<n ; i++) 
    {
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    sum += v[n-1]-v[0];
    return (sum + n <= m);

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        if(solve())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}