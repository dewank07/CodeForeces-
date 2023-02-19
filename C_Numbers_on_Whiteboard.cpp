#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        cout<<"2"<<endl;
        bool d = true;
        for(int i = 1; i <=a ; i++)
        {
            if(d)
            {
                cout<<(a)<<" "<<a-1<<endl;
                d =false;
            }
            else{
                cout<<(a+a-2)/2<<" "<<(a+a-2)/2<<endl;
                a=(a+a-2)/2;
                d = true;
            }
            
        }

    }



    return 0;
}