#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a%7==0)
        {
            cout<<a<<endl;
        }    
        else{
            int b  = a - (a%10);
            for(int i = 1 ; i <= 9; i++)
            {
                if((b+i)%7==0)
                {
                    cout<<b+i<<endl;
                    break;
                }
            }
        }
    }
return 0;
}



