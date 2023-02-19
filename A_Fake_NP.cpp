#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if(a==b)
    {
        cout<<a;
        return 0;
    }
    if((a-1)%6==0)
    {
        a++;
    }
    if((b+1)%6==0)
    {
        b--;
    }
    
    if(a%3==0 && (b%3==0 && b%2!=0))
    {
        b/3>(b-1)/2 ? cout<<3 : cout<<2;   
    }
    else{
        cout<<2;
    }
    





return 0;
}



