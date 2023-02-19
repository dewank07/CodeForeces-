
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    int k = a+a;
    long int b[100001];
    for(int i =0 ; i<k ; i++)
    {
        cin >> b[i];
    }
    sort(b,b+k);
    long int s = 0 , ss = 0;
    for(int i = 0, j = a ; i < a ; i++, j++)
    {
        s+=b[i];
        ss+=b[j];
    }
    if(s!=ss)
    {
            for(int i =0 ; i<k ; i++)
            {
                cout << b[i] << " ";
            }
    }
    else
    {
        cout<<-1;
    }
return 0;
}



