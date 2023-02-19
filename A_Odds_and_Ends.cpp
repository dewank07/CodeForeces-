#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int f = 0 ;
    for(int i = 0 ; i < t; i++ )
    {
        int a; cin >> a;
        if(a&1)
        {
            f++;
        }
    }
    if(f==t)
    {
        cout<<"Yes"<<endl;
    }
    else if(f)
return 0;
}



