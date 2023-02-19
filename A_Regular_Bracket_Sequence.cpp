#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin  >> t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a.size()%2==0 && a[0]!=')' && a[a.size()-1]!='(')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }



    
    return 0;
}