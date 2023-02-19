#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long long int hc,dc,hm,dm;
        cin >> hc >> dc >> hm >> dm;
        long long int k,w,a;
        cin >> k >> w >> a;
        
        bool y = true;
        for(int i = 0 ; i <= k ; i++)
        {

           long long  int nhc = hc  + i*a;
            long long int ndc = dc + (k-i)*w;
            if(ceil(double(hm)/double(ndc)) <= ceil(double(nhc)/double(dm)))
            {
                cout<<"YES"<<endl;
                y = false;
                break;

            }
        }
        if(y)cout<<"NO"<<endl;
                


        

    }
return 0;
}



