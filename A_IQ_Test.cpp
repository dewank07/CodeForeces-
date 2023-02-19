#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[4][4];
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin >> a[i][j];
        }
      }    

int sb = 0 , sw = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ;j<3;j++)
        {

            a[i][j] == '#' ? sb++ : sw++;
            a[i+1][j] == '#' ? sb++ : sw++;
            a[i][j+1] == '#' ? sb++ : sw++;
            a[i+1][j+1] == '#' ? sb++ : sw++;
            if(sb>1 && sw>1)
            {
                sb = 0 ;
                sw = 0 ;
            }
            else{
                cout<<"YES"<<endl;
                exit(0);
            }
        }       
    }
    cout<<"NO";
    return 0;

}