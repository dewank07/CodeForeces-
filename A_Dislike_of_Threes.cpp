#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int i = 0,j=1,k = 1 ;
        while(true)
        {
            if(j%3!=0 && j%10!=3)
            {
                k=j;
                i++;
            }
           // cout<<i<<endl;
            if(i==a){
                cout<<j<<endl;
                break;
            }
            j++;
        }
        //cout<<endl;
    }
    return 0;
}
