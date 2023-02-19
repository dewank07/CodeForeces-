#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for(int i = 0 ; i < a.size();i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            a[i] ='0';
        }
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y')
        {
            a[i] = '0';
        }
    }
    for(int i = 0 ; i < a.size();i++)
    {
        if(a[i]!='0')
        cout<<"."<<char(tolower(a[i]));
    }



    
    return 0;
}