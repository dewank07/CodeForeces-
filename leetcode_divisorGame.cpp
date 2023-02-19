#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin  >> n;
    int x=1,y=1,flag=0;
    while(n!=1)
    {
           for(int i =n/2 ;i>=1;i--)
           {
               if(n%i==0)
               {
                   n-=i;
                   flag++;
                   //cout<<n<<endl;
                   break;
               }

           }
    }
    if(flag%2==0)
    {
        cout<<"false";

    }
    else
    {
        cout<<"true";

    }


}