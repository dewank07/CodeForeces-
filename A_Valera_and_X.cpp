
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    char b[a][a];
    for(int i = 0  ; i < a ; i++ )
    {
        for(int j = 0 ; j < a ; j++)
        {
            cin >> b[i][j];
        }
    }
char c = b[0][0];
char d = b[0][1];
char e = b[0][a-1];


    if(c!=e)
    {
        cout<<"NO"<<endl;
        exit(0);
    }
    if(c==d)
    {
        cout<<"NO"<<endl;
        exit(0);
    }
    int k = a;
    for(int i = 0  ; i < a ; i++ )
    {
        k--;
        for(int j = 0 ; j < a ; j++)
        {
            if(i==j)
            {
                if(b[i][j]!=c)
                {
                    cout<<"NO"<<endl;
                    exit(0);
                }
            }
            else if(j==k)
            {
                if(b[i][j]!=e)
                {
                    cout<<"NO"<<endl;
                    exit(0);
                }
            }
            else{
                
                if(b[i][j]!=d)
                {
                    cout<<"NO"<<endl;
                    exit(0);
                }
            }
        }
    }
    cout<<"YES"<<endl;

return 0;
}



