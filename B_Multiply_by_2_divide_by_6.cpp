#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a;
        cin>>a;
        int sum=0;
        bool d6 = false;
        int count =0;
        
            while(a!=1 && a!=0)
            {
                if(a%6==0)
                {
                    a/=6;
                    
                }
                else{
                    a*=2;
                }
                count++;
            }
            if(a==1)
            {
                cout<<count<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }

    }



    
    return 0;
}