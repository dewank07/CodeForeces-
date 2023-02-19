#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if((a|b)==b)
        {
            cout<<1<<endl;
           
        }
        else{
              
           
                        if((a&(a-1))&&(b&(b-1)))
                        {
                            cout<<int(log2(a)) + 1<<endl;
                        }
                        else
                        {
                            
                        }
        }
    }

return 0;
}



