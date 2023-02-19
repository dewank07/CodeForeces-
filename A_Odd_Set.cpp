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
        for(int  i = 1 ; i <= 2*a ; i++)
        {
            cin >> b;
            if(b%2==1)
                sum++;
        }
        if(sum == a)
        {
            cout<<"Yes"<<endl;
        }
        else{
        cout<<"No"<<endl;
        }

    }
    return 0;
}
