#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            long long int a;
            cin>>a;
            long long int c = (a/14);
            
            if((a>=(((14*c) + 1)) && (a<=((14*c) + 6)) && c!=0))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }




    
    return 0;
}