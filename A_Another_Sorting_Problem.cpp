#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    string c[a],d[a]; 

    for(int i = 0 ; i  < a ; i++)
    {
        
        cin >> c[i];
    }

    for(int i = 0 ; i  < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {


            if(j%2!=0)
            {
                d[i] = c[i];

                if(d[i][j]<'M')
                {
                    d[i][j] = 'Z' - d[i][j] + 65;
    

                
                }
                else{
                     
                   d[i][j] = d[i][j] - 25;
                }
            }
        }
        
    }
    for(int i = 0 ; i  < a ; i++)
    {


        for(int j = 0 ; j < a ; j++)
        {
            if(d[i] == c[j])
            {
                cout<<j+1<<" ";
                
            }
        }
    }


return 0;
}



