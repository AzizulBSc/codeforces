#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define MAXN 10005
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
long long a[100005],v[100005],suma[100005],sumv[100005];
int main()
{
    long i,j,m,n,lab,l,r;
    scanf("%ld",&n);sumv[0]=suma[0]=0;
    for (i=1;i<=n;i++) {scanf("%I64d",&v[i]);a[i]=v[i];sumv[i]=sumv[i-1]+v[i];}
    sort(a+1,a+n+1);for (i=1;i<=n;i++) suma[i]=suma[i-1]+a[i];
    scanf("%ld",&m);
    for (i=1;i<=m;i++)
    {
        scanf("%ld%ld%ld",&lab,&l,&r);
        if (lab==1) printf("%I64d\n",sumv[r]-sumv[l-1]);
         else printf("%I64d\n",suma[r]-suma[l-1]);
    }
    return 0;
}
