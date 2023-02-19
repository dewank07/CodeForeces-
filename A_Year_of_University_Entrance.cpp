#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     int a[t];
     for(int i=0;i<t;i++)
     {
         cin>>a[i];
     }
     sort(a,a+t);
     if(t%2==0)
     {
         cout<<a[t/2 -1];
     }
     else{
         cout<<a[t/2];
     }



    
    return 0;
}