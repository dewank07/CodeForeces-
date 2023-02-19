#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int d = s.size(),count=0;


        for(int i=0;i<d;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }

        int e = d;
        
        if((count%d)%2!=0)
        {
            cout<<"DA"<<endl;
        } 
        else{
            cout<<"NET"<<endl;
        }

    }




    
    return 0;
}