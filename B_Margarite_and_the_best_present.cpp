#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        
        if(a%2==0 && b%2 == 0)
        {
            cout<<(a+b)/2<<endl;
        }
        else if(a%2!=0 && b%2!=0)
        {
            cout<<(-(a+b)/2)<<endl;
        }
        else if(a%2==0 && b%2!=0)
        {
            cout<<(-((b-a)+1)/2)<<endl;
        }
        else{
            cout<<(((b-a)+1)/2)<<endl;
        }
    }



    
    return 0;
}