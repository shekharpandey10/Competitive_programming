#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a>>ch>>b;

    if(ch=='='){
    a==b?cout<<"Right":cout<<"Wrong";
        
    }else if(ch=='>'){
        a>b?cout<<"Right":cout<<"Wrong";
          
    }else if(ch=='<'){
        a<b?cout<<"Right":cout<<"Wrong";
    }
}