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
       string b;
       cin >> b;
       if(a<=2)
       {
           if(b!="WW")
           {
               cout<<"NO"<<endl;
               continue;
           }
           else{
               cout<<"YES"<<endl;
               continue;
           }
       }
       int bf = 0, rf = 0;
       bool chk = true;

       for(int i = 1; i < a-1 ; i++ )
       {
           if(b[i]=='W')
           {
               if(b[i-1]!='W' && b[i+1]!='W')
               {
                   cout<<"NO"<<endl;
                    chk = false;
                   break;
               }  
           }
           if(b[i]=='B')
           {
               bf++;
           }
           if(b[i]=='R')
           {
               rf++;
           }
       }
       if(!chk)
       {
           continue;
       }
       if(bf==a || rf==a)
       {
           cout<<"NO"<<endl;
       }
       else{
           cout<<"YES"<<endl;
       }

    }
    return 0;
}