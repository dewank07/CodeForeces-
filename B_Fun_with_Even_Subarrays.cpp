#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        vector<int> v;
        v.reserve(a);
        for(int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
  
    vector<int>::iterator ip;
    int count;
    count = std::distance(v.begin(),std::unique(v.begin(), v.begin() + a));
     //cout<<count;
     if(count -1 == 0)
     {
         cout<<0<<endl<<endl;
     }
     
     else{
     int d = a;
         int b = a;
         int k = 1,l = a-1,flag=0;
         count--;
         while(b--)
         {
             int i = 0;
             while(k+l+i-1 <= 2*k+l-2)
             {
                    cout<<i<<endl;
                    v[k+l+i-1]=v[l+i-1]; 
                    i++;               
             }
             d-=i+1;
            flag++;

             if(d-1==0)
             {
                 break;
             } 
         }
         cout<<flag<<endl;
     }
     


    }
    
    return 0;
}


