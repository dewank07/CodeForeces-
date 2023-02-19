#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int e = 1000 , f = 1000 , k = -1 , g = -1;
    char d[a][b];
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b; j++)
        {
            cin>>d[i][j];
            
            if(d[i][j] == 'B')
            {
                e = min(e,j);
                g = max(g,j);

                f = min(f,i);
                k = max(k,i);
            }
        }
    }
    //1,1 = 2,2
//cout<<k;
    cout<<((f+k)/2)+1 << " " << ((e+g)/2)+1;

    
    return 0;
}


