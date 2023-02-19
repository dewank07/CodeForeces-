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
      if(a==1)
      {
          cout<<"1";
      }

      else
      {
        int i = 3, count, c;
        cout<<"2"<<" ";
          for(int count = 2; count <= a; i++)  
    {
        
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i) 
        {
            cout<<i<<" ";
            count++;   
        }
      }
  } 
cout<<endl;
}


    
    return 0;
}