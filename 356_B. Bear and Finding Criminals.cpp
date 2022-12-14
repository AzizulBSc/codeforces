#include <bits/stdc++.h>
using namespace std;
long long n , i , a[100] , k , c = 0;

int main()
{
    cin >> n >> k;
    k--;
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0;
    while (k - i >= 0 || k + i < n)
    {
        if ((k - i < 0 || k + i >= n) && (a[k - i] == 1 || a[k + i] == 1))
            c++;
        else if(a[k - i] == 1 && a[k + i] == 1)
            if (i == 0) c++; else c += 2;
        i++;
    }
    cout << c;
}
