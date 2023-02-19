#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b = "heidi";
    int count = 0;
    for(int i=0,j=0;i<a.size();)
    {
        if(b[j]==a[i])
        {
            count++;
            j++;
        }
        i++;
    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    
    return 0;
}