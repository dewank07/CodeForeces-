#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int p[2] = {0};
    int count = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i]==1)
        {
            count++;
        }
    }


    for(int i = 0 ; i < a.length()-1 ; )
    {
        if(a[i]!=a[i+1])
        {
            p[0]++;
            i++;
        }
        else{
            i+=2;
        }
    }
    
    return 0;
}