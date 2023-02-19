#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    string a,b="",c="";
    cin >> a;
    
    for(int i =0 ; i < a.size();i++)
    {
        if(a[i]==',')
        {
            for(int j = 0 ; j < i ; j++)
            {
                string b = "" ;
                if(a[j] > 9)
                {
                    b +=a[j];
                }
                else{
                    c+=a[j];
                }
            }
            sort(c.begin(),c.end());
            if(b.size() <= c[int(c.size())-1])
            {
                cout<<b[int(c[int(c.size())-1])];
            }
            else if (int(c[0])<b.size())
            {
                cout<<b[int(c[0])];
            }
            else{
                cout<<'X';
            }
        }
        
    }
    


return 0;
}



