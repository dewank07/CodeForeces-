#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v(k);
        for(int i = 0 ; i < k ; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        
        long long int cf = 0,eat=0,hide=0;
        while(cf < v.size() && hide + n - v[cf] < n)
        {
            hide+=n - v[cf++];
        }
   cout<<cf<<endl;
    }

return 0;
}



