


#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int i =0,b[a];
    
        for(int i = 0 ; i < a ; i++)
        {
            cin >>b[i];
         
        }
        if(a==1)
    {
        cout<<b[0]<<endl;
        continue;
    }
        sort(b,b+a);
        for(int j = a-1 ; j > -1 ; j--)
        {
            cout<<b[j]<<" ";

        }
        cout<<endl;
    }

return 0;
}



