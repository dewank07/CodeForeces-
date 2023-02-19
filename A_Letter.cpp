#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d;
    cin >> a >> b;
int mni = a, mxi = -1, mnj = b, mxj = -1;
    char c[a][b];
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cin >> c[i][j];
            if(c[i][j] == '*')
            {
                if(i<mni)
                {
                    mni = i;
                }
                if(mxi<i)
                {
                    mxi = i;
                }
                if(j<mnj)
                {
                    mnj = j;
                }
                if(mxj<j)
                {
                    mxj = j;
                }
                
            }
        }
    } 
for(int i = mni; i < mxi+1 ; i++)
    {
        for(int j = mnj ; j < mxj+1 ; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }


    
    return 0;
}