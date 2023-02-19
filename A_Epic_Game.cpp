#include <iostream>
using namespace std;
int gcd(int x, int y)
{
	return (x==0)? y : gcd(y % x, x);
}
int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int k = 0;
	while (n >= 0)
	{
		++k;
		n -= gcd((k%2!=0) ? a : b, n);
	}
	if (k%2!=0) cout << 1; else cout << 0;
    
    return 0;
}