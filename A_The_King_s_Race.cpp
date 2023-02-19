#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n;
    cin >> n;
    long long int a,b;
    cin >> a >> b;
    max(n-a,n-b) < max(a-1,b-1) ? cout<<"Black" : cout<< "White"; 
    
    return 0;
}


