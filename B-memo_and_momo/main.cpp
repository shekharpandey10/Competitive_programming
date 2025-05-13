#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a,b;
     long long k;
    cin>>a>>b>>k;
   if(a>=1 && b>=1 && k>=1){
     if(a%k==0 && b%k==0){
        cout<<"Both";
    }else if(a%k==0 && b%k!=0){
        cout<<"Memo";
    }else if(a%k!=0 && b%k==0){
        cout<<"Momo";
    }else cout<<"No One";
   }
}