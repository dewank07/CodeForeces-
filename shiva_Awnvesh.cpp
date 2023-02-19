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
         vector<int> v;
         for(int i = 0 ; i < a ; i++)
         {
             int b;
             cin >> b;
             v.push_back(b);
         }
         sort(v.begin(),v.end());
         int c,d = 0;
         for(int i = 0,j=a-1 ; i < a/2 ; i++,j-- )
         {
             c = v[i] + v[j];
             d += c*c;
             c = 0;

         }
         cout<<d;
     }
}