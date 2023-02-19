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
        string d;
        cout<<a; 
        if(a>9)
        {
            cout<<a<<endl;
        }
        else if(a>45)
        {
            cout<<"-1"<<endl;
        }
        else{
            for(int i = 9,j=0 ;sum!=a;i--)
            {
                if(sum + i <=a)
                {
                    d[j]=i;
                    j++;
                }

            }
            reverse(d.begin(),d.end());
            cout<<d<<endl;
        }
    }




    
    return 0;
}