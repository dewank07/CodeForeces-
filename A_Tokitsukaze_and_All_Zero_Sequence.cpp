#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for(int i = 0 ; i < a ; i++)
        {
            cin >> v[i];
        }
        int f = 0;

        int sum = INT_MAX,d=0;
        int i = 0;
        while(sum!=0)
        {
        
        
        sort(v.begin(),v.end(),greater<int>());
          if(i<a)
          {
              if(v[i]==v[i+1])
            {
                v[i]=0;
            }
            else{
                v[i] = v[i+1];
            }
            i++;
          }  

        }
        for(int i = 0 ; i < a-1 ; i++)
        {
            if(v[i]==v[i+1])
            {
                v[i]=0;
            }
            else{
                v[i] = v[i+1];
            }
        }

    }
}