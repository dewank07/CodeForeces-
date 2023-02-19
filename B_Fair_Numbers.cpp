#include<bits/stdc++.h>
using namespace std;
bool ok(long long int n)
{
	long long int temp = n;
	while(n > 0)
	{
		int k = n%10;
		if(k == 0)
		{
			n = n/10;
			continue;
		}
		if(temp%k != 0)
		return false;
		n = n/10;
	}
	return true;
}
int main() {
int t;
  	cin>>t;
  	while(t--)
  	{
  		long long int n;
  		cin>>n;
  		while(!ok(n))
  		n++;
  		cout<<n<<endl;
    }


return 0;
}



