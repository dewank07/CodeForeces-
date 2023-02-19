#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a  >> b;
    string c;
    int d = b;
    cin >> c;
    sort(c.begin(), c.end());
    int sum = 0;
    char last = 'a' - 2;     
    int len = 0 ;
    for(int i = 0 ; i < c.size() ; i++)
    {
        if(c[i]>=last + 2)
        {
            last = c[i];
            sum += c[i] - 'a' + 1;
            len++;
            if(len>=b)
            {
                cout<<sum,exit(0);
            }
            

        }

    }
        cout<<-1;
return 0;
}



