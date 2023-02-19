#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int b = 0;
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i]=='F' && s[i+1]=='S')
        {
            b--;
        }
        else if(s[i]=='S' && s[i+1]=='F')
        {
            b++;
        }
    }
    
     b>0 ? cout<<"YES" : cout<<"NO" ;



    
    return 0;
}