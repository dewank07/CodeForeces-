#include<bits/stdc++.h>
using namespace std;
#include <climits>

int main()
{

    long long int a;
    cin>>a;
    if(a%2==0)
    {
        cout<<a/2;
    }
    else
    {
        cout<<-(a+1)/2;
    }


    
    return 0;
}