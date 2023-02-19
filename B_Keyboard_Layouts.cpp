#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m,z;
    cin >> n >> m >> z;

    map<char,char> mk;

    for(int i = 0 ; i < n.size() ; i++)
    {
        mk[n[i]] = m[i];
    }

string ans = "";
    for(int i = 0 ; i < z.size() ; i++)
    {
       if(isalpha(z[i]))
       {
        if(isupper(z[i]))
        {
            ans += toupper( mk[tolower(z[i])] );
        }
        else{
            ans += mk[z[i]];
        }
       }
       else{
            ans += z[i];
       }     
    }
    cout<<ans;
}