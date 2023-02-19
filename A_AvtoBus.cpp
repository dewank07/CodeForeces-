#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a;
        cin >> a;
        if(a<4 || a%2!=0)
        {
            cout<<-1<<endl;
            continue;
        } 
        cout<<int(ceil(float(a/3)))<<" "<<int(a/2)<<endl;
    }
    return 0;
}