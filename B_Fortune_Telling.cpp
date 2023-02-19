#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
     cin >> t;
      while(t--)
      {
          int n,x,y,sum =0;

          cin >> n >> x >> y ;
          int d;
          for(int i = 0 ; i < n ; i++ )
          {
              cin >> d;
              sum+=d;
          }
            if((sum + x + y)%2==0)
            {
                cout<<"Alice"<<endl;
                fflush(stdout);
            }
            else{
                cout<<"Bob"<<endl;
                fflush(stdout);

            }
      }

return 0;
}



