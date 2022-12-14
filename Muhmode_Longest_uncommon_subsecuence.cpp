/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void solve(string a,string b){
    if(a==b){
        cout<<-1<<endl;
    }
    else{
        cout<<max(a.size(),b.size())<<endl;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    solve(s1,s2);

    return 0;
}
