#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k*l)/nl;
    int lime = (c*d);
    //cout<<drink<<" "<<nl<<" ";
    int e = min(drink, min(lime,(p/np)));
    cout<<e/n;
    

return 0;
}



