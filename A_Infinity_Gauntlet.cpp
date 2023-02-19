#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string a[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    string b[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    bool c[6] = {false};
    string d;
    if(t == 0)
    {
        int i = 6 ;
        cout<<i<<endl;
        while(i--)
        {
            cout<<a[i]<<endl;
        }
    }
    else{
        for(int i = 0 ; i < t ; i++ )
        {
            cin >> d;
            int j = 0;
            while(true)
            {
                if(d == b[j] )
                {
                    c[j] = true;
                    break;
                }
                j++;
            }
        }
        cout<<6-t<<endl;
        int i = 0;
        while(i<6)
        {
            if(c[i]==false )
            {
                cout<<a[i]<<endl;
            }
            i++;
        }
    }



    
    return 0;
}