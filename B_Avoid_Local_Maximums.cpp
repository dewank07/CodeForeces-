#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for(int i = 0 ; i < a; i++ )
        {
            cin >> v[i];
        }
        int f = 0;
        for(int i  = 1 ; i < a-2 ; i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                
                
                
                if(v[i+1]>v[i] && v[i+1]>v[i+2])
                {
                    continue;
                }
                else{
                v[i-1]=v[i];
                f++;
                }

            }
        }
        cout<<f<<endl;
        for(int i = 0 ; i < a; i++ )
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
return 0;
}



