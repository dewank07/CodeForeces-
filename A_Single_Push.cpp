#include<bits/stdc++.h>
using namespace std;

bool single()
{
    int a;
    cin >> a;
    int b[a+2] , c[a+2] ,d[a+2] = {0};
    for(int i = 1 ; i <= a; i++)
    {
        cin >> b[i];
    }
    int flag = 0 ;
    for(int i = 1 ; i <= a; i++)
    {
        cin >> c[i];
        d[i] = c[i] - b[i];
       
    }
    for(int i = 0 ; i < a+1; i++)
    {
         if(d[i]<0)
        {
            return false;
        }
        if(d[i]!=d[i+1])
        {
            flag++;
        }
    }
    return (flag<=2);
} 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        if(single())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}