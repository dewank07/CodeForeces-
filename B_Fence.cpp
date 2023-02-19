#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    vector<int> v(a);
    for(int i = 0 ; i < a ; i++)
    {
        cin >> v[i];
    }
    int sum  = 0,j=0;
    bool first = true;
    vector<pair<int,int>> v1;
    int i;
    for( i  = 0  ; i < b ; i++)
    {
        sum+=v[i];
    }
    v1.push_back(make_pair(sum,i-b)); 
    for(int i  = b  ; i < a-b ; i++)
    {
        sum+=v[i];
        sum-=v[i-b];
        v1.push_back(make_pair(sum,i-b)); 

    }
    sort(v1.begin(),v1.end());
    cout<<v1[0].second;
    return 0;

}