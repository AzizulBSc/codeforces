#include <iostream>

using namespace std;

int main() {
	long long t;
	int a,b,c,d;
	cin>>t;
	while(t--)
		{
			cin>>a>>b>>c>>d;
			if((a%2==0&&b%2==0)||(a%2==1&&b%2==1))
			{
				if(c%2==1&&d%2==1||(c%2==0&&d%2==0))
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
			else if((a%2==1&&b%2==0)||(a%2==0&&b%2==1))
			{
				    if(c%2==1&&d%2==0||(c%2==0&&d%2==1))
					{
					cout<<"YES"<<endl;
				    }
				else
				{
					cout<<"NO"<<endl;
				}

			}
			else cout<<"NO"<<endl;

		}
	return 0;
}
