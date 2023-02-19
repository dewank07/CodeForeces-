#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

int main() {
    Code By Asquare
   long int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,c;
        cin >> a >> b >> c;
        if(a==b && a>1 && c==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        long long int f = 0 ;
        long long int d = b-a + 1;  
        
        // for(int i = a ; i <= b; i++ )
        // {
        //     if((i&1))
        //     {
        //         f++;
        //     }
        // }
        
        if(a&1)
        {
            if((d+1)/2 <= c)
            {
                cout<<"YES"<<endl;
            }  
            else{
                cout<<"NO"<<endl;
            }  
        }
        else{
            if((d)/2 <= c)
            {
                cout<<"YES"<<endl;
            }  
            else{
                cout<<"NO"<<endl;
            }

        }
        
    }

return 0;
}



