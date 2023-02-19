#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    int c[5]={0},a;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>a;
        c[a]+=1;
    }
     int total = c[4] + c[3] + c[2] / 2;
    c[1] -= c[3];
    
    if (c[2] % 2 == 1)
    {
        total += 1;
        c[1] -= 2;

    }
    if (c[1] > 0)
    {
        total += (c[1] + 3) / 4;
    }
    cout<<total<<endl;
    return 0;
}