#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(long long int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10 + sum_of_digit(n/10));
    }
}
int sum_of_array_element(int arr[],int n){
    if(n<=0){
        return 0;
    }
    else{
         return arr[n-1] + sum_of_array_element(arr,--n);
    }
}
void string_reverse_print(string s){
    if(s.size()==0){
        return ;
    }
    else{
        string_reverse_print(s.substr(1));//every call depreciated s[0] index value;
        cout<<s[0];
    }
}

int main(){

   long long int n = 123456789;
   int arr[] = {1,2,3,4,5,6,7,8,9};
   string name = "Azizul Hoque";
   int s = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" = "<<sum_of_digit(n)<<endl;
    cout<<"array element Sum = "<<sum_of_array_element(arr,s)<<endl;
    cout<<name<<"=  reverse Print = ";
    string_reverse_print(name);
    return 0;
}
