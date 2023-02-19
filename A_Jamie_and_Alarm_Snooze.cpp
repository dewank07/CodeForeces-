#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int a,b;
    cin >> a >> b;
    if(a/10==7 || a%10 == 7 || b/10==7 || b%10 == 7)
    cout<<"0",exit(0);
    else{
        int f = 0;
        while(true)
        {
            if(a==0 && b==0)
        {
                cout<<"1",exit(0);
        }


            while(true)
            {

                  if(a/10==7 || a%10 == 7 || b/10==7 || b%10 == 7)
                {
                cout<<f,exit(0);
                }

                b = b - t;
//cout<<a<<" "<<b<<" "<<endl;
              f++;

                if(b<=0)
                {
                    a--;
                    if(a<0)
                    {
                        a=11;
                    }
                    int tm = 59 + b;
                    b=tm;
                   //cout<<tm<<endl;
                }
                
            } 

        }
        
     
    }



return 0;
}



