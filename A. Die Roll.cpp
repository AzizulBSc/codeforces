#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,c=0;
    cin>>x>>y;
    if(x>=y){
        z = x;
    }
    else{
       z = y;
    }
    for(int i = z;i<7;i++){
        c++;
    }
    if(c==0){
        cout<<"0/1"<<endl;
    }
    if(c==1){
        cout<<"1/6"<<endl;
    }
    if(c==2){
        cout<<"1/3"<<endl;
    }
    if(c==3){
        cout<<"1/2"<<endl;
    }
    if(c==4){
        cout<<"2/3"<<endl;
    }
    if(c==5){
        cout<<"5/6"<<endl;
    }
    if(c>5){
        cout<<"1/1"<<endl;
    }
    return 0;
}
