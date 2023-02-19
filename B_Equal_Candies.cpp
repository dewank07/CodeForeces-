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
        vector<int> v(a);
        int sum = 0;
        for(int i = 0 ; i < a ; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        
        for(int i = 0 ; i < a ; i++)
        {
                sum+=(v[i]-v[0]);
        }
        cout<<sum<<endl;

    }
    return 0;
}