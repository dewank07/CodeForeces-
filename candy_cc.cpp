#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t ;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        for(int i = 1, j = 2; a>=0 && b>=0 ; i+=2,j+=2)
        {
            a-=i;
            b-=j;
        }
        if(a<0)
        {
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Limak"<<endl;
        }
    }
}