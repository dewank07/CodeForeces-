#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a;
 cin >> a;
 int f1 = 0 ,f2 = 0;
 for(int i = 0 ; i < a.size(); i++)
 {
     if(a[i] >= 'A' && a[i] <= 'Z')
     {
         f1++;
     }
     if(a[i] >= 'a' && a[i] <= 'z')
     {
         f2++;
     }
 }
 if(f1>f2)
 {
     for(int i = 0 ;i<a.size();i++)
     {
         a[i]=toupper(a[i]);
         cout<<a[i];
     }
 }
 else
 {
     for(int i = 0 ;i<a.size();i++)
     {
         a[i]=tolower(a[i]);
         cout<<a[i];
     }
 }



    
    return 0;
}