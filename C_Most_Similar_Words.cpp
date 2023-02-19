#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        vector<string> v(a);
        int sum = 0,mn=100000;
        for(int i = 0 ; i < a ; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i < a ; i++)
        {

            for(int j = i+1 ; j < a ; j++)
            {
                sum = 0;
                for(int y = 0 ; y < b ; y++)
                {
                    sum += abs((int(v[i][y]) - 'a') - (int(v[j][y]) - 'a'));
                }   
                 
                mn = min(mn,sum);


            } 
        }
        cout<<mn<<endl;

    }
    return 0;
}