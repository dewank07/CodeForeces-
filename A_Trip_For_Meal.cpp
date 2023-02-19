#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if(n>1)
    {
        int d = min(a,b);
        n-=2;
        cout<<min(d,c)*n + d;
    }
    else
    {
        cout<<0;
    }
    

return 0;
}



