#include<bits/stdc++.h>
using namespace std;
int main() {
    map<char,int> m = {{'b',1},{'a',2},{'u',2},{'l',1},{'s',1},{'r',1},{'B',1}};

    map<char,int> mm ;
    string a;
    cin >> a;
    for(int i = 0 ; i < a.size() ; i++)
    {
        mm[a[i]]++;
    }   

    vector<int> v = {mm['b'], mm['l'], mm['s'], mm['r'], mm['B']};
    sort(v.begin(),v.end());
    if(mm['b']>=v[0] && mm['a']>=2*v[0] && mm['u']>=2*v[0] && mm['l']>=v[0] && mm['s']>=v[0] && mm['r']>=v[0] && mm['B']>=v[0] )
    {
        cout<<v[0];
    }
    else if(mm['a']/2<=v[0] || mm['u']/2<=v[0]){
        mm['a']/2 <= mm['u']/2 ? cout<<mm['a']/2 : cout<<mm['u']/2 ; 
    }
    else{
        cout<<0;
    }

return 0;
}



