#include<bits/stdc++.h>
using namespace std;

int sTd(char b)
{
    return b-'0';
}
int main() {
    string a;
    cin >> a;
    for(int i = 0 ; a[i]!='\0' ; i++)
    {
        
        if((9-sTd(a[i]))==0 && i==0)
        {
            continue;
        }
        else if(sTd(a[i]) > (9-sTd(a[i])))
        {
            a[i] = ((9-sTd(a[i]))) + '0';
        }
    }
    cout<<a;

return 0;
}



