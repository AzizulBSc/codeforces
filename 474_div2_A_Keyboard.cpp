#include <iostream>
using namespace std;
string layout = "qwertyuiopasdfghjkl;zxcvbnm,./";
char direction;
string s;
char correctChar(char dir,char lett){
    int pos = layout.find(lett);
    if(dir=='L'){
        return layout[pos+1];
    }
    else{
        return layout[pos-1];
    }
}
int main()
{
    cin>>direction;
    cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<correctChar(direction,s[i]);
    }
    cout<<endl;
    return 0;
}