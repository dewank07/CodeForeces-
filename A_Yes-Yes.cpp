#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string yes="";
        for(int i=0;i<18;i++)
           {yes+="Yes";} 

size_t f = yes.find(n);

        if( f != string::npos) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}