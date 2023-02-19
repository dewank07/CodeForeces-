#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    char c[a][b];
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cin >> c[i][j];
        }
    }
    int count = 0,wc = 0;

    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            if(c[i][j]=='W')
            {
                if((i-1)>=0 && c[i-1][j]=='P' || (j+1)<b && c[i][j+1]=='P' || (i+1)<a && c[i+1][j]=='P' || (j-1)>=0 && c[i][j-1]=='P')
                {
                    count++;

                }
                wc++;
            }
        }
    }
    cout<<count;
    return 0 ;

}