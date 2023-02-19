#include<bits/stdc++.h>
using namespace std;
int main() {
   long long int a,b;
    cin >> a>> b;
    long int c[a], sum=0;

    for(long int i = 0 ; i < a ; i++)
    {
        cin >> c[i];
        sum += ceil(float(c[i])/b);
    }
    cout<<(sum/2)+(sum%2);
    

return 0;
}



