#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int c1=0,c2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1')
        {
            c1++;
            c2=0;
        }
        else{
            c2++;
            c1=0;
        }

        if(c1>=7 || c2>=7)
        {
            break;
        }
    }
    if( c1>=7 || c2>=7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    
    return 0;
}