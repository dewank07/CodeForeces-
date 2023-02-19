#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , m, flag = 0;
    cin >> n >> m;
    for(int i = 0 ; i <= sqrt(n); i++)
    {
        for(int j = sqrt(m); j > -1 ; j--)
        {
            if(i*i + j == n && i + j*j == m)
            {
                flag++;
            }
        }
    }
    cout<<flag;



    
    return 0;
}