    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t; 
        while(t--)
        {
           int a;
           vector<int> v(a);
           for(int i = 0 ; i < a ; i++)
           {
               cin >> v[i];
           }
           vector<int> u(a);s
          // std::vector<int>::iterator it;
           for(int i = 0 ; i < a ; i++)
           {
               cin >> u[i];
           }
           vector<int> w(a);
           int sum = 0;
           for(int i = 0 ; i < a ; i++)
           {
               if(u[i]==0)
               {}
               w[i] = v[i] - u[i];
               sum += w[i];
           }

           if(sum%a==0)
           {
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
        }

        return 0;
    }
