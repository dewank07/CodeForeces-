#include<bits/stdc++.h>
using namespace std;
bool solve()
{
    int n,k;
    cin >> n >> k; 
    n--;k--;
    if(n==k)
    {
        cout<<2*n<<endl;
        return true;
    }
    if(n==0 || k==0)
    {
        if(n==1 || k==1)
        {
            cout<<1<<endl;
            return true;
        }
        else
            return false;
    }   
     
     int d = abs(n-k);
        cout<<2*min(n,k) +4*(d/2) + (d&1)<<endl;
    return true;  
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        if(!solve())
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}