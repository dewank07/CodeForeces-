#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        //string b = a;
        bool c = true;
        int flag = 0, eve = 0, sum = 0;
        for(int i = 0; i<b.size() ; i++)
        {
            if((b[i]-48) == 0)
            {
                flag++;
            }   
            if(((b[i]-48))%2==0)
            {
                eve++;
               // cout<<b[i]-48<<endl;
            }
            sum+=(int(b[i])-48);

        
        }
        //cout<<flag<<" "<<eve<<" "<<sum;
        
        if( flag >= 1 && eve >= 2 && sum%3==0)
        {
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
    }




    
    return 0;
}