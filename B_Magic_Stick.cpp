#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        if(a>3)
        {
            cout<<"YES"<<endl;
        }
        else if ( a==1)
        {
            cout<<(b==1 ? "YES" : "NO")<<endl;
        }
        else
        {
            cout<<(b<=3 ? "YES" : "NO")<<endl;
        }
    }




    
    return 0;
}