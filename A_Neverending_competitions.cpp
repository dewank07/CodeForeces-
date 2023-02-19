#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a;
    cin>>a;
    string b;
    cin>>b;
    bool t= false;
    for(int i=0;i<a;i++)
    {
        string d;
        cin>>d;
        if(d[5]==b[0])
        {
            if(d[6]==b[1])
            {
                if(d[7]==b[2])
                {
                 t=true;
                }


            }
        }
        else{
            t=false;
        }
    }
    if(t==true)
    {
        cout<<"home"<<endl;
    }
    else
    {
        cout<<"contest"<<endl;
    }



    
    return 0;
}