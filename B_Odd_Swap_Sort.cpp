#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        bool pos = false;
        vector<int> v(a),v1,v2,e,o;
        for(int i = 0 ; i < a ; i++)
        {
            cin >> v[i];
            if(v[i]%2==0)
            {
                v1.push_back(v[i]);
                e.push_back(v[i]);
            }
            else
            {
                v2.push_back(v[i]);
                o.push_back(v[i]);
            }
        }
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());

        if(v1==e && v2==o)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
return 0;
}



