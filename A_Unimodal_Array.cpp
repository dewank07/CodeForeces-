#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int c[105];

int main()
{
    int x,max1=0,a,b=x-1;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&c[i]);
        if(c[i]>max1)
        {
            max1=c[i];
            a=i;
        }
        if(c[i]>=max1)
            b=i;
    }
//    cout<<a<<" "<<b<<endl;
    for(int i=a;i<b;i++)
        if(c[i]!=c[i+1])
        {
            printf("NO\n");
            return 0;
        }
    for(int i=0;i<a;i++)
        if(c[i]>=c[i+1])
        {
            printf("NO\n");
        //    cout<<i<<"r"<<endl;
            return 0;
        }
    for(int i=b;i<x;i++)
        if(c[i]<=c[i+1])
        {
            printf("NO\n");
        //    cout<<i<<"l"<<endl;
            return 0;
        }
    printf("YES\n");

    return 0;
}