#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a;
        float b;
        cin>>a;
        b = 360/(180-a);
        if(b>2 && (b-(int)b) == 0 )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    
    return 0;
}