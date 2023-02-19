#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int a,flag=0;
    string t;
    cin>>a>>t;
    int c[a];
    for(int i =0 ; i < a; i++)
    {
        c[i] = t[i]-'0';
    }
    if(c[0]==1 || c[a-1]==1)
    {
        cout<<a*2<<endl;
    }
    else
    {
        int i = 0 , l, r,o=0;
        while(c[i]!=1 && i < a)
        {
            i++;
            l = i;
            
            
        }
        i = a-1;
        while(c[i]!=1 && i>-1)
        {
            i--;
            r =a-i;
             
        }
        if(l == a)
        {
            cout<<a<<endl;
        }
        else
        {
        cout<<2*(a - min(l,r))<<endl;

        }
    }

}
    
    return 0;
}