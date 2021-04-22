#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> a(4);
	cin >> a[0] >> a[1]>>a[2]>>a[3];
	string s;
	cin >> s;
	int result = 0;
	for(int i = 0 ; i < s.length(); ++ i)
	result+=a[s[i]-'0'-1];
	cout<<result<<endl;
}
int main(){

solve();
}
