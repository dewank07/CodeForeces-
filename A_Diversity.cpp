#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    set<char> s;
    for(int i = 0 ; i < a.size() ; i++)
    {
        s.insert(a[i]);
    } 
    int t;
    cin >> t;
    if(a.size()<t)
    {
        cout<<"impossible",exit(0);
    }
    if(t<s.size())
    {
        cout<<0;
    }
    else
    {
    cout<<t-s.size();
    }
    return 0;

}



