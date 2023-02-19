#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        string w = "Timur";
        sort(w.begin(),w.end());
        if(s==w)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}