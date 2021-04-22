#include<bits/stdc++.h>
using namespace std;

void result() {
     long long n, m, x;
    cin >> n >> m >> x;
    x--;
     long long c = x / n;
    long long r = x % n;
    cout << r * m + c + 1 <<endl;
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        result();
    }
}
