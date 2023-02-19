#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    int flag = a.length()-1;
    bool h =true;
    for(int i  = 0 ; i < a.length() && h;)
    {
        if(a[i]==b[i])
        {
            i++;
        }
        if(a[flag]==b[flag])
        {
            flag--;
        }
        else
        {
            swap(a[i],a[flag]);
            h = false;
        }
    }
    if(a==b)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}