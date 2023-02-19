#include<bits/stdc++.h>
using namespace std;
int sTd(char a)
{
    return a - '0';
}
int main()
{

string a ;


cin >> a;
vector<int> v;
for(int i = 0,j=0 ; i < a.size(); i++)
{
 
 if(a[i]>='0' && a[i]<='9')
 {
     v.push_back(sTd(a[i]));
 }
}
int flag = 0 ;

for(int i = 0 ; i < v.size() ; i++)
{
    if(v[i]&1==1)
    {
        flag++;
    }
}

if(flag==v.size())
{
    cout<<"-1",exit(0);

}
else{

vector<int>::iterator ip;
ip = unique(v.begin(),v.begin()+v.size());
v.resize(std::distance(v.begin(),ip));
sort(v.begin(),v.end(),greater<int>());
int save,k;


for(int i = v.size()-1 ; i>=0  ; i--)
{
    //cout<<v[i];
    
    if(v[i]%2==0)
    {
    save = v[i];
    k = i;
    break;
    }
}
cout<<endl;
for(int j = k ; j< v.size()-1 ; j++)
{    
    swap(v[j],v[j+1]);

}
for(int j = 0 ; j< v.size() ; j++)
{
    cout<<v[j];

}

}
    return 0;

}