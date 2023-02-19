#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin >> a  >> b >> c;
        if(a*b > c)
        {
            cout<<"-1"<<" "<<b+1<<endl;
        }
        else
        {
            cout<<b+1<<" "<<"-1"<<endl;

        }
    }




    
    return 0;
}