#include <bits/stdc++.h>
using namespace std;
void read (int &x) {

char ch = getchar(); 
x = 0; 
while (!isdigit(ch)) 
ch = getchar();

while (isdigit(ch)) 
x = x * 10 + ch - 48, ch = getchar();
} 

const int N = 2e5 + 5;

int n, a[N], b[N], mn[N], mx[N], vis[N];

multiset<int> S, s; multiset<int>::iterator it;

void add (int x) {

it = s.find (x);
int A = 0, B = 0;

if (it != s.begin()) {
     --it; A = (*it);
     S.insert (mn[x] - mx[A]);
     ++it;
}
++it;

if (it != s.end()) {
     B = (*it);
     }
if (A && B) S.erase (S.find (mn[B] - mx[A]));
}

void del (int x) {
    
it = s.find (x);
int A = 0, B = 0;
if (it != s.begin()) {
     --it; A = (*it);
    S.erase (S.find (mn[x] - mx[A]));
     ++it;
}
++it;
if (it != s.end()) {
     B = (*it);
    
}
s.erase (x);
if (A && B) S.insert (mn[B] - mx[A]);
}
void solve () {
read (n);
for (int i = 1; i <= n; ++i) read (a[i]), b[i] = a[i];
sort (b + 1, b + n + 1);
int m = unique (b + 1, b + n + 1) - b - 1;
for (int i = 1; i <= n; ++i)
for (int i = 1; i <= m; ++i) mx[i] = 0, mn[i] = n, vis[i] = 0;
for (int i = 1; i <= n; ++i) mx[a[i]] = i;
for (int i = n; i >= 1; --i) mn[a[i]] = i;
s.clear (), S.clear ();
for (int i = 1; i <= m; ++i) add (i);
long long res = 0;
for (int i = 1, j = 1; i <= n; ++i) {
     if (i == j) {
         if ((++vis[a[j]]) == 1) del (a[j]); ++j;
     }
     while (j <= n && (int)S.size() && (*S.begin()) < 0) {
         if ((++vis[a[j]]) == 1) del (a[j]); ++j;
     }
 
     if ((int)S.size() == 0 || (*S.begin()) > 0) res += n - j + 2;
    
}
printf ("%lld\n", res);
}
signed main() {
int T; read (T);
while (T--) solve ();
return 0;
}