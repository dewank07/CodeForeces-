#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cin >> a >> b;
    char c[501][501];
    
    for(int i =0 ; i < a ; i++)
    {
        for(int j =0 ; j < b ; j++)
        {
            cin >> c[i][j];
            if(c[i][j] == '.')
            {
                c[i][j]='D';
            }
        }
    }
    for(int i =0 ; i < a ; i++)
    {
        for(int j =0 ; j < b ; j++)
        {
            if(c[i][j] == 'W')
            {
                if(c[i+1][j]=='S'&& i+1<a)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                if(c[i-1][j]=='S'&&i-1>=0)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                if(c[i][j+1]=='S'&&j+1<b)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                if(c[i][j-1]=='S' && j-1>=0)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
cout<<"Yes"<<endl;
    for(int i =0 ; i < a ; i++)
    {
        for(int j =0 ; j < b ; j++)
        {
        
            cout << c[i][j];
        }
        cout<<endl;
    }
    
return 0;
}



