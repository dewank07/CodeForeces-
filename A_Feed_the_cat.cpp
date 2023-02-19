#include<bits/stdc++.h>
using namespace std;
int main() {
    float hh,mm,dif = 0;
    cin >> hh >> mm;
    if(hh<20)
    {
        if(mm>0 && hh==19)
        {
            dif = 60 - mm;
        }
        else
        {
            if(mm==0)
            {
                dif= (20-hh)*60;
            }
            else
            {
                dif = (60 - mm) + (19 - hh)*60;
            }
        }
    }
    
    float  h,d,c,n ;
    cin >>h >> d >> c >> n;
    float pt = dif*n + h;
    float total = pt*c;
    if(dif!=0)
    {
        total -= (pt*c)/5;
    } 
cout<<float(total);
return 0;
}



