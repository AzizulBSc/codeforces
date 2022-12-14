
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main ()
{
  ll n, j, k;
  cin >> n;
  vector < ll > a (n);
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
  for (ll i = 1; i < n - 1; i++)
    cout << min (a[i + 1] - a[i],
		 a[i] - a[i - 1]) << " " << max (a[n - 1] - a[i],
						 a[i] - a[0]) << endl;
  cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] << endl;
  return 0;
}
