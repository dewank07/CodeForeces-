#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    int b[a];
    float sum=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        sum+=b[i];
        
    }
    int k=1,flag=0;
    if((float)(sum/a)>=4.500)
    {
        cout<<"0";
    }
    else{
        sort(b,b+a);
        for(int i=0; k && i<a;i++)
        {
            // 3 3 5 5 
            if(b[i]<5)
            {
                sum+=(5-b[i]);
                flag++;
            }
            if((float)(sum/a)>=4.500){
                 cout<<flag;   
                 k=0;
                }
        }
        
    }

    
    return 0;
}