/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

bool num_check(long long n,int l)
{
        int digit;
        int len = 0;
        if (n < 0) n = -n;
        do {
                digit = n % 10;
                if(len==0&&digit!=0){
                     return false;
                }
                if(digit>l){
                    return false;
                }
                len++;
        } while ((n/=10) > 0);
        return true;
}
int main()
{
    long long n;
    int l;
    cin>>n>>l;
    int count = 0;
    for(long long i = 0;i<n;i++){
        string num;
        int a[10] = {0};
        cin>>num;
        for(long long j=0;j<num.length();j++){
            a[num[j]-'0']++;
        }
        int flag = 0;
        for(long long j = 0;j<l+1;j++){
            if(a[j]==0)
              flag = 1;
        }
        if(!flag)
        count++;
       
    }
    cout<<count<<endl;

    return 0;
}
