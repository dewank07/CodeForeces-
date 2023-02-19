#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >>k ;
        string s;
        cin >> s;

        if(k==0)
        {
            cout<<"1"<<endl;
            continue;
        }


        string s1;
        s1 =s;
        reverse(s1.begin(),s1.end());

        if(s==s1)
        {
            cout<<"1"<<endl;
        }


        else{
            int i = 1 ;
            while(i<=k)
            {
                
                s1 = s ;
                reverse(s1.begin(),s1.end());
                s+=s1;
                s1 = s ;
                reverse(s1.begin(),s1.end());
                if(s==s1)
                {
                    cout<<i+1<<endl;
                    break;
                }

            }
        }
    }
return 0;
}



