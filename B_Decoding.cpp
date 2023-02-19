#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string b;
    //logva
    cin >> t >>b;
    int a = t;
    char c[a];
    c[(a-1)/2] = b[0];
    for(int i = 1; i < t ; i++)
    {
        --a; 
        if(a%2==0)
        {
           c[(a/2)-1]=b[i]; 
        }
        else
        {
            c[t-((a/2)+1)] = b[i];
        }
    }   

for(int i=0;i<t;i++)
{
    cout<<c[i];
}


    
    return 0;
}