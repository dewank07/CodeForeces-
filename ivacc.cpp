    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t; 
        while(t--)
        {
           int a;
           cin >> a;
           int b[a];
           for(int i = 0 ; i < a ; i++)
           {
               cin >> b[i];
           }
           if(a==1)
           {
               cout<<0<<endl;
               continue;
           }
           for(int i = a-1 ; i > 0 ; i--)
           {
               if(b[i]!=0)
               {
                   cout<<i<<endl;
                   break;
               }
           }
        }
        return 0;
    }
