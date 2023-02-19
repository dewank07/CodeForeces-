#include <iostream>
using namespace std;
int main() {
    
    int r,l;
    cin>>r>>l;
    for(int i =r;i<=l;i++)
    {
        int d=i%10;
        int e=i/10;
        cout<<i<<", ";
        if(i%d==0 && i%e==0)
        {
            cout<<i<<", ";
        }

    
    }
    return 0;
}
