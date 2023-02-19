#include"bits/stdc++.h"
using namespace std;
int dem(int a)
{
    long long int e = 0,i=0, k = a;

    while(a!=0)
    {
        if(a%10!=0)
        {
            e += (a%10)*pow(10,i);
        i++;

        }
        a/=10;

    }
    if(e==0)
    {
        return k;
    }
    return e;

}
int main()
{
    long long int a,b;
    cin >> a >> b;
    long long int c = a + b;
    long int d = dem(a) + dem(b);
    long int f = dem(c);
    if(d==f)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}