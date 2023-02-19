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
        int b[300000] = {0};
        for(int i  = 0 ; i < a ;i++)
        {
            int d;
            cin >> d;
            b[d]++;
        }
        bool flag = true;
        for(int i = 0 ; i <=a ; i++)
        {
            if(b[i]>=3)
            {
                cout<<i<<endl;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<-1<<endl;
        }
        
    }
    return 0;
}