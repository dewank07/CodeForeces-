#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    int a[t][3],flag = 0 ;

    for(int i = 0 ; i < t ; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        if(a[i][0] + a[i][1] + a[i][2] >=2)
        {
            flag++;
        }
    }
    cout<<flag;



    
    return 0;
}