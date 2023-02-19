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
           int second, first;
           int third = (a-3)/3;
           int left = a - third;
           if(left % 2 == 0)
           {
               first  = floor(( left+2 )/2);
               second = a - floor(first+third);
           }
           else{

               second = floor((left-1)/2);
               first = floor((left+1)/2);

           } 
           cout<<second<<" "<<first<<" "<<third<<endl;
        }

        return 0;
    }
