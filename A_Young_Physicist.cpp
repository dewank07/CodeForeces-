#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin  >> a;
    int b[a][3];
    int s1=0,s2=0,s3=0;
    for(int i = 0 ; i<a ; i++)
    {
        cin>>b[i][0];
        cin>>b[i][1];
        cin>>b[i][2];
        s1+=b[i][0];
        s2+=b[i][1];
        s3+=b[i][2];
    }
    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    
    return 0;
}