#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a;
    cin>>a;
    while(a--)
    {
	long long int t,f=0,k=0;
	cin >> t;
	 
	for(int i = t/2 ; i>=1 ; i--)
	{
	    if(t%i==0)
	    {
	        //cout<<f<<"yo"<<endl;
			f=f+i;
			//cout<<f<<"hi"<<f+i<<endl;
			if(f+i==t)
	        {k++;}
	    }
	}
	cout<<k<<endl;
	// 12 6 4 3 2 1
	// 12 18 22 
	
}
return 0;
}