#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    bool len=false,cap=false,sm=false,spcl=false,dig=false;
    if(a.size()>=5)
    {
        len = true;
    }
    
    //cout<<a.size()<<endl;

    for(int i=0;i<a.size();i++)
    {
        //cout<<a[i];
        if((a[i]=='!') || (a[i]=='?') || (a[i]=='.') || (a[i]==',') || a[i]=='_' )
        {
            spcl=true;
        }
        if((a[i]>='0') && (a[i]<='9'))
        {
            dig=true;
            
        }
        if(isupper(a[i]))
        {
            cap=true;
            
            
        }
        if(islower(a[i])){
            sm=true;
            
        }
    }
    if((len==true) && (cap==true) && (sm==true) && (dig==true))
    {
        cout<<"Correct"<<endl;
    }
    else{
        cout<<"Too weak"<<endl;
    }





    
    return 0;
}