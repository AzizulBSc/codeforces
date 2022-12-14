
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int hourglassSum(int  arr[6][6])
{
    int maxSum = INT_MIN;
    for(int i = 1; i<=4; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            temp = 0;
            temp += arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1];
            temp += arr[i][j];
            temp += arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            if(temp>maxSum)
            {
                maxSum = temp;
            }
        }
    }
    return maxSum;
}


int main()
{


    int arr[6][6];
    int n;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[i][j];
        }
    }

    int result = hourglassSum(arr);

    cout << result << "\n";
    return 0;
}
