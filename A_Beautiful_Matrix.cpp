#include<bits/stdc++.h>
using namespace std;
int main() {
    //int a[5][5];
    int a;
    int c=0,b=0;
    for(int i = 1 ; i <= 5 ; i++ )
    {
        for(int j = 1 ; j<=5 ; j++)
        {
            cin >> a;
            if(a==1)
            {
                b = i;
                c = j; 
                 cout<<abs(3-b) + abs(3-c);
return 0;

            }
        }
    }
    cout<<b<<c<<endl;
return 0;
}



