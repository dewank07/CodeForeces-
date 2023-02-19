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
        int mx =  INT_MIN;
        map<int, int> m;
        for(int i = 0  ; i < a ; i++)
        {
            
            int x;
            cin >> x;
            m[x]++;
            mx = max(mx,m[x]);
        }
        if(mx == a)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt = 1;
        while(mx<=a)
        {
            if(2*mx >= a)
            {
                cnt += (a-mx);
                break;
            }
            cnt += mx;
            mx = mx*2;
            cnt++;
        }
        cout<<cnt<<endl;


    }

    return 0;
}
