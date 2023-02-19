#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a<=6)
        {
            cout<<"15"<<endl;
        }
        else if(a<=8)
        {
            cout<<"20"<<endl;
        }
        else if(a<=10)
        {
            cout<<"25"<<endl;
        }
        else{
            int b=a/10;
            a%=10;
        }
    }




    
    return 0;
}