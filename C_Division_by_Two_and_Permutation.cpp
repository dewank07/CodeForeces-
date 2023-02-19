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
        long long b[a];
        for(int i = 0; i < a; i++)
        {
            cin>>b[i];      
            while(b[i]>a)
            {
                b[i]/=2;
            }   
        }
        sort(b,b+a);
       int c[a+1];
        for(int i = 0 ; i< a ; i++)
        {
            if(b[i]<=a && c[b[i]] == 0 )
            {
                c[b[i]] = 1;
            }
            else{
                while(b[i]>0)
                {
                    b[i]/=2;
                    if(b[i]<=a && c[b[i]] == 0 )
                    {
                        c[b[i]] = 1;
                        break;
                    }
                }
                if(b[i]>0)continue;
            else {cout<<"NO"<<endl;}
            
            }
        }
        int sum =0 ;
        for(int i = 0 ; i < a ; i++)
        {
            sum+=b[i];
        }
if(sum==a)
{ 
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }



    
    return 0;
}