#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int d[c];
        for(int i = 0; i < a; i++)
        {
           // 1 2+1 3-1 4
           // 1 3 2 4
           
           // 1 2 3 4  
           
           // 
           


            // 1+3 2 3 4-3 5 6
            // 4   2 3 1   5 6 
            // 4 5 3 2 
            // 4 1 2 3 5 6 

            // 4 2 1 3 5 6 
            d[i] = i+1;
        }
        for(int i=0;i<a;i++)
        {
            if(b--)
            {
                if(d[i+1]<d[i] && d[i+1]<d[i+2])
                {
                    d[i]+=
                }
                
            }
        }
    }




    
    return 0;
}