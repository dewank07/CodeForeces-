#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
    int a,b;
    cin >> a >> b;
    int c = gcd(a,b);
    int count=0;
    for(int i = 1; i<=b ; i++)
    {
        if(gcd(i,b)==c)
        {
            //cout<<"hi";
            count++;
        }
    }
    cout<<(float(count)/b)*1000000;
    return 0;
}