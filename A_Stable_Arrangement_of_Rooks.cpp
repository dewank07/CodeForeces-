#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int t;
 cin>>t;
 while(t--)
{
    int a,b;
    cin>>a>>b;
    if(b>(a+1)/2)
    {
        cout<<"-1"<<endl;
        continue;
    }

    vector <string> s(a,string(a,'.'));
    for(int i =0 ; i < b; i++)
    {
        s[2*i][2*i]='R';
    }
    for(int i = 0 ; i<a;i++)
    {
        cout<<s[i]<<endl;
    }
}
    return 0;
}