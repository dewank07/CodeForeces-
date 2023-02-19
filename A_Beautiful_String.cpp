#include<bits/stdc++.h>
using namespace std;
        char k[3] = {'a','b','c'};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int tt = 0;
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i]=='?') continue;

            if(a[i]==a[i+1])
            {
                cout<<-1<<endl;
                tt = 1;
                break;
            }
        }
        if(tt)
        {
            continue;
        }
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i]=='?')
            {
                if(a[i+1]=='?' && (i+1 < a.size()))
                {
                    for(int j =0 ; j < 3 ; j++)
                    { 
                        if(k[j]!=a[i-1])
                        {
                            a[i] = k[j];
                            break;
                        }
                        
                    }
                } 
                else
                {
                    for(int j =0 ; j < 3 ; j++)
                    {
                        if(i==0 && (k[j]!=a[i+1]))
                        {
                            a[i] = k[j];
                            break;
                        }    
                        else if((k[j]!=a[i-1]) && (k[j]!=a[i+1]) && (i+1 < a.size()))
                        {
                            a[i] = k[j];
                            break;
                        }
                        else if(i==a.size()-1 && (k[j]!=a[i-1]))
                        {
                            a[i] = k[j];
                            break;
                        }
                    } 
            
                    }
            }
     }
     cout<<a<<endl;
    }
    
    return 0;

}

