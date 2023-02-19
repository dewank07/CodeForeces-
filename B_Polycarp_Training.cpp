#include"bits/stdc++.h"
using namespace std;
int main()
{
    long int a;
    cin >> a;
    vector<int> v(a);
    for(int i = 0; i < a ; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    long int flag = 1;
    for(int i = 0; i < a; i++)
    {

    if(v[i]>=flag) flag++;

    }
    cout<<flag-1;
    return 0;
}