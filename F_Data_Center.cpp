#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
	cin>>n;
	int rootn = sqrt(n);
	int i;
	for(i = rootn; i >=1; --i) {
		if((i * (n/i)) == n) {
			break;
		}
	}
	cout<<2*(i+n/i)<<endl;
    
    return 0;
}