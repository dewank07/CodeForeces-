#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        long long int f = 0 , g = 0,ans = 0 ;
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i]=='1')
            {
                f++;
            }
            else{
                g++;
            }
        }
       if(g!=f)
       {
           ans = min(g,f);
       }
       else{
           ans = g-1;
       }
       cout<<ans<<endl;
    }
return 0;
}



