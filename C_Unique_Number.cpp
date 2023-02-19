#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int a;
        cin>>a;
        int sum=0;
        int d[9];
        int j=0;
        if(a<=9)
        {
            cout<<a<<endl;
        }
        else if(a>45)
        {
            cout<<"-1"<<endl;
        }
        else{
           
           for(int i = 9;i>0;i--)
            {
                
                if(sum + i <=a)
                {
                    d[j]=i;
                    sum+=i;
                    j++;
                }
                

            }
            
            for(int i=j-1;i>=0;i--)
            {
                cout<<d[i];
            }
            
            cout<<endl;
        }
    }




    
    return 0;
}