#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a[3][3];
    long int sum = 0 ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> a[i][j];
            sum +=a[i][j];
        }
    }
    a[1][1] = (sum)/6;
    sum = a[0][1] + a[1][1] + a[2][1];
    int sum1 = a[0][0] + a[0][1] + a[0][2];
    int sumc = a[0][0] + a[1][0] + a[2][0];
    a[0][0]  = (2*sum - (sumc+sum1))/2;
    a[2][2] = sum - (a[0][0]+a[1][1]);
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        cout <<  a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}