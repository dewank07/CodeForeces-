#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     int k=t;
     int count=0;
     string a,b;
     int arr[t];
     while(k--)
     {

        cin>>a;
        if(k==(t-1))
        {
             b=a;
        }
        count = 0;
        for(int i=0;b[i]==a[i];i++)
        {
            count++;
        }
      arr[k]=count;


        b=a;
     }
    
    
cout<<*min_element(arr,arr+t);

    
    return 0;
}