#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    cin >> a;
    int b[a],c[a], i;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> b[i];
        c[i] = b[i];
    }
    sort(b,b+a);
    
    for(i = 0 ; i < a ; i++)
    {
        if(b[a-1]==c[i])
        {
            break;
        }
    }
    cout<<i+1<<" "<<b[a-2];



    
    return 0;
}