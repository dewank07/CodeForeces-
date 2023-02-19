#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        vector<int> v;
        if(a==1)
        {
            int z;
            cin >> z;
            cout<<z<<endl;
            continue;
        }

        for(int i = 0 ; i < a ; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
            sort(v.begin(),v.end());
            int res = v[0];
            for(int i  = 0 ; i < v.size() - 1 ; i++)
            {
                res  = max(res,v[i+1]-v[i]);
            }

            cout<<res<<endl;
            }
    
return 0;
}

//-4 : 



