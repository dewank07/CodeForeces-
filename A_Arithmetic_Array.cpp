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
        int b,sum = 0 ;
        for(int  i = 1 ; i <= a ; i++)
        {
            cin >> b;
            sum+=b;
        }
        if(sum<0 || sum<a)
        {
            cout<<1<<endl;
        }
        else{
        cout<<abs(sum-a)<<endl;
        }

    }
    return 0;
}
