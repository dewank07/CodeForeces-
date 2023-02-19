#include<bits/stdc++.h>
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
    int energy = 0,money = b[0] ;
    for(int i = 1 ; i < a ; i++ )
    {
        energy += b[i-1] - b[i];
        if(energy<0)
        {
            money += (-energy);
            energy = 0;
        } 
    }
    cout<<money;

    return 0;

}