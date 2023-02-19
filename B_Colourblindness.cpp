#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        if( a.size() != b.size() )
        {
            cout<<"NO"<<endl;
            return 0;
        }

        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i]==b[i] || a[i]=='B' && b[i]=='G' || b[i]=='B' && a[i]=='G' )
            {
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }

        cout<<"YES"<<endl;
    
return 0;
} 


int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        solve();
    }

        
}