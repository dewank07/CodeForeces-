#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    cin >> a >> b >> c;
    while(c--)
    {
        a<b ? a++ : b++;
    }
    cout<<min(a,b)*2;
    return 0;
}


