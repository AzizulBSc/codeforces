#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int num,num1;
    double dbl,dbl1;
    string st;
    cin>>num;
    num1 = i + num;
    cin>>dbl;
    dbl1 = d + dbl;
    getline(cin,st);
    cout<<num1<<endl;
    cout<<setprecision(1)<<fixed<<dbl1<<endl;
    cout<<s<<st<<endl;
    return 0;
}
