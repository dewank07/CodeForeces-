#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, a;
    cin >> t >> a;
    string b;
    cin >> b;
    while(a--)
    {
        int c,d; char e,f;
        cin >> c >> d >> e >> f;
        for(int i = c-1 ; i <= d-1 ; i++)
        {
            if(b[i]==e)
            {
                b[i] = f ;
            }
        }
    }
cout<<b;


    
    return 0;
}