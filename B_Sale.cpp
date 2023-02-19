#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    int c[a];
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
    sort(c,c+a);
    int sum=0;
    for(int i=0;i<b;i++)
    {
        if(c[i]<=0)
        sum+=abs(c[i]);
    }
cout<<sum;



    
    return 0;
}