#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a , b , flag = 0;
    cin >> a >> b;
    int c[a];
    for(int i = 0 ; i < a ; i++)
    {
        cin >> c[i];
    }
    for(int i = 0 ; i < a ; i++)
    {
        if(c[i] >= c[b-1] && c[i] > 0)
        {
            flag++;
        }
    }
cout<< flag <<endl;

    
    return 0;
}