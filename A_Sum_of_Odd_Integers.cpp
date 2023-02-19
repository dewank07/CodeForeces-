#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t ;
    cin >> t ;
    while(t--)
    {
        long int a , b ;
        cin >> a >> b ;
        long int y = sqrt(a);
        if(a % 2 == b % 2 && b <= y)
             cout << "YES" << endl; 
        else
            cout<<"NO"<<endl;
    }
    return 0;
}