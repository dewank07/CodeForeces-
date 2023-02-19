#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        char w[n][m];
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin >> w[i][j];
            }
        }   
        int minx = INT_MAX,miny = INT_MAX;
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(w[i][j] == 'R')
                {
                    minx = min(i,minx);
                    miny = min(j,miny);
                }
                }
            }
        
        if(w[minx][miny] == 'R')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}