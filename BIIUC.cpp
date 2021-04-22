#include <bits/stdc++.h>
using namespace std;


main() {
	long long t;
	double PI=acos(-1),A;
    int a,b;
	cin>>t;
	while(t--)
		{
		    long long L,X,r;
		    cin>>L>>X;
		    r = L/2;
		    A = 3.1416*r*r;
		    cout<< fixed << setprecision(10)<<(A-(L * L * 3.1416) / 4)<<endl;

		}
		}
