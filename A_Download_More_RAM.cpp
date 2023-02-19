#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b ;
        int d[10001] = {0};
        int c[a] , e[a];
        for(int i = 1 ; i <= a ; i++)
        {
            cin >> c[i];
        }
        for(int i = 1 ; i <= a ; i++)
        {
            
            cin>>e[i];
            d[c[i]] += e[i];
        }
        for(int i = 1 ; i < 10001 ; i++ )
        {
            if(d[i]!=0)
            {
               if(b >= i)
               {
                   b+=d[i];
               }
               else
               break;
            }
        }
    cout<<b<<endl;
    }

return 0;
}



