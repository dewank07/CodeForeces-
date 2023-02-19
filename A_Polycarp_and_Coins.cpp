#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int a;
        cin >> a;
        if(int(ceil(float(a)/3)) + int(floor(float(a)/3))*2 == a)
            cout<<int(ceil(float(a)/3))<<" "<<int(floor(float(a)/3))<<endl;
        else
            cout<<int(floor(float(a)/3))<<" "<<int(ceil(float(a)/3))<<endl;

    }
}