#include<bits/stdc++.h>
using namespace std;
char upper(char ch){
    return 'A'+(ch-'a');
}
int main(){
    while(1){
       string s;
       cin>>s;
       if(s.size()==0) break;
       for(int i=0;i<s.size();i++){
        cout<<upper(s[i]);
       }
       cout<<endl;
    }
}