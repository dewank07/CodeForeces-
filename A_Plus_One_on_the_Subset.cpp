#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a;
        cin>>a;
        long long b[a];
        for(int i = 0 ; i < a; i++)
        {
            cin>>b[i];
        }
        sort(b,b+a);
        cout<<b[a-1] - b[0]<<endl;
    }




    
    return 0;
}