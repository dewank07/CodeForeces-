#include"bits/stdc++.h"
using namespace std;
int main()
{
 
       int a;
    cin >> a;
    vector<int> v(a);
    for(int i = 0 ; i < a ; i++)
    {
        cin >> v[i];
    }
    int pos = 1,time =v[0] + 1 ;
    for(int i = 0 ; i < a-1; i++)
    {
        time += abs(v[i]-v[i+1])+2;
    }
    cout<<time;   
    return 0;

}