/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int pos = 1,indx = 0;
    for(int i = 0; i<s2.size(); i++)
    {
        if(s2[i]==s1[indx])
        {
            pos++;
            indx++;
        }
    }
    cout<<pos<<endl;

    return 0;
}
