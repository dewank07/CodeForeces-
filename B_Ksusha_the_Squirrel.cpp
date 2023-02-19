#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b;
    cin>>a>>b;
     string c;
    int rock;
    cin>>c;
    
    
    for(int i=0;(i<a);i++)
    {
        if(c[i]=='#')
        {
            rock ++;

        }
        else
        {
            rock=0;
        }
        if(rock>=b)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
    



    



    
    return 0;
}