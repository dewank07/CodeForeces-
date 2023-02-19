#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    if(t<2)
    {
        cout<<"NO",exit(0);
    }

    set<int> s;
    while(t--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    auto it = s.begin();
    it++;
    if(it==s.end())
    {
        cout<<"NO";
    }
    else
    cout<<*it;


return 0;
}



