#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    for(int i = 0 ; i < a ; i++ )
    {
        cin >> b[i];
    }
    for(int i = 0 ; i < a-1 ; i++)
    {
        int k = *max_element(b+(i+1), b+(a-1));
        b[i] = k;
    }
    b[a-1] = -1;
    for(int i = 0; i < a; i++)
    {
        cout<<b[i]<<" ";
    }
}