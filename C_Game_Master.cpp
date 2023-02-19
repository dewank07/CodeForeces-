#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
     int a;
     cin>>a;
     int b[a];
     int c[a];
     int e[a]={0};
      int f[a]={0};
     
     for(int i=0;i<a;i++)
     {
         cin>>b[i];
        
     }
  
     for(int i=0;i<a;i++)
     {
         cin>>c[i];   
     }
if(a==1)
cout<<"1"<<endl;

else{
     for(int i=0;i<a-1;i++)
     {
         if(b[i]>b[i+1])
         {
             e[i]=1;
         }
         else
         {
             e[i+1]=1;
             //e[i]=0;
         }
          if(c[i]>c[i+1])
         {
             f[i]=1;
         }
         else
         {
             f[i+1]=1;
             f[i]=0;
         }




     }
     for(int i = 0;i<a;i++)
     {
         cout<<e[i];
     }

cout<<endl;
 for(int i = 0;i<a;i++)
     {
         cout<<f[i];
     }
cout<<endl<<endl;

 }

}

    
    return 0;
}