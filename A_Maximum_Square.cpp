#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin >> a;
        int b[a];
        for(int i =0 ; i < a ; i++)    // 5 4 4 3 1 
                                      // 1 2 3 4 5
        {
            cin >> b[i];
        }
        sort(b,b+a,greater<int>());
        int f =0 ;
        for(int i = 0 ; i < a ; i++)
        {
            if(b[i]>=i+1)
            {
                f++;
            }
        }
        cout<<f<<endl;
    }




    
    return 0;
}