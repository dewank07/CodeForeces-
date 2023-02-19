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
       long long int b[a],c[a];
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
            
        }
        sort(b,b+a);
    for(int i=0;i<a;i++)
    {
        c[i]=b[i]*(a-i);

    }        

       cout<<*max_element(c,c+a)<<endl;


    }



    
    return 0;
}