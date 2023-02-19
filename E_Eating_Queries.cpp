#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> v(n);
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> u;
        for(int i  = 0 ; i  < n ; i++)
        { 
            u.push_back( (i ? u[i-1] : 0) + v[i]);
        }
        while(q--) {
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(u[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
    cout << ans << "\n";

    }


    }
    return 0;
}
