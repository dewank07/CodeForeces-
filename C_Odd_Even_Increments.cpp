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
        int b[a];
        int odd = 0, eve = 0;
        int Eodd = 0, Eeve = 0;
        for(int i  = 0 ; i < a ;i++)
        {
            cin >> b[i];
            if(i%2==0)
            {
                if(b[i]%2==0)
                {
                    Eeve++;
                }
                else{
                    Eodd++;
                }
            }
            else{
                if(b[i]%2==0)
                {
                    eve++;
                }
                else{
                    odd++;
                }

            }
        }

        if(Eodd == 0 || Eeve == 0 )
        {
            if(eve == 0 || odd == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
            {
                cout<<"NO"<<endl;
            }



    }
    return 0;
}