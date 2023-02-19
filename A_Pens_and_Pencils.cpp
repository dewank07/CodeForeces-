#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float a,b,c,d,e,x,y;
        cin >> a >> b >> c >> d >> e ;
        
        x = floor((a+c-1)/c);
        y = floor((b+d-1)/d);
        if(x+y <= e)
        {
            cout<<int(x)<<" "<<int(y)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }



    
    return 0;
}