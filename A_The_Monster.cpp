#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c,d;
    cin >> c >> d;
    int e = -1;
    bool q = true;
    for(int i = 0, j = 0 ; q && (i<100 && j<100) ; )
    {
        if((b+a*i)<(d+c*j))
        {
            i++;
        }
        else if((b+a*i)>(d+c*j)){
            j++;
        }

        if((b+a*i)==(d+c*j))
        {
            e = b + a*i;
            break;
        }
    }
    cout<<e;
return 0;
}



