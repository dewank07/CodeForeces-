#include<bits/stdc++.h>
using namespace std;
struct team
{
    int problems;
    int penaltytime;
};

bool cmp(const team& left, const team& right)
{
    return left.problems > right.problems
        || (left.problems == right.problems && left.penaltytime < right.penaltytime);
}

int main()
{
    int n, k;
    team t[50];
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i].problems >> t[i].penaltytime;
    }
    sort(t, t + n, cmp);
    k -= 1;
    int l(k), r(k);
    while (l > 0 && t[l-1].problems == t[k].problems && t[l-1].penaltytime == t[k].penaltytime)
    {
        l -= 1;
    }
    while (r + 1 < n && t[r+1].problems == t[k].problems && t[r+1].penaltytime == t[k].penaltytime)
    {
        r += 1;
    }
    cout << r - l + 1 << endl;
    return 0;
}






/*
int main()
{
    int a,b;
    cin >> a >> b;
    pair<int, int> q[a];
    for(int i = 0 ; i < a ; i++)
    {
        cin >> q[i].first;
        cin >> q[i].second;
    }
    sort(q,q+a,greater<pair<int,int>>()); //comprator problem
    int count = 1;
    int i = b-1, j=b+1;
    while(q[b-1]==q[i-1] && i>=1)
    {
        count++;
        
        i--;
    }    
    while(q[b-1]==q[j-1] && j<=a)
    {
        count++;
        j++;
    }    
    cout<<count<<endl;
    for(int i = 0 ; i < 25 ; i++)
    {
        cout << q[i].first<<" ";
        cout << q[i].second<<endl;
    }
    return 0;
}*/
