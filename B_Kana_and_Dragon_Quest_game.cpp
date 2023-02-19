#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c;

        cin>>a>>b>>c;
        if(a<=10 && c>=1)
        {
            a-=10;
        }
        else
        {
            while(b--)
        {
            a/=2;
            a+=10;
        }
        while(c--)
        {
            a-=10;
        }
        }
        if(a<=0)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }

    
    return 0;
}