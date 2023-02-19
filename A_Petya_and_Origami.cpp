#include<bits/stdc++.h>
using namespace std;
int dew()
{
    long long a,b;
    cin>>a>>b;
    int sum = 0 ;
    sum = floor((a*2 + b -1)/b) + floor((a*5 + b -1)/b) + floor((a*8 + b -1)/b) ;
    sum = ceil(float((a)*2)/float(b)) + ceil(float((a)*5)/float(b)) + ceil(float((a)*8)/float(b));
    cout<<sum;
    return 0;
}
int abhi()
{

    long long invites, pages;
    cin>>invites>>pages;
    int redn =   ceil(float(2*invites)/float(pages));
    int greenn = ceil(float(5*invites)/float(pages));
    int bluen =  ceil(float(8*invites)/float(pages));
    cout<< redn+greenn+bluen;


    return 0;
}
int main()
{
    abhi();
}



