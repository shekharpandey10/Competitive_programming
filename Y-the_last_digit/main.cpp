#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
  a=a%100;
  b=b%100;
  c=c%100;
  d=d%100;

    int ans=(a*b*c*d)%100;
   
    if(ans<10){
        cout<<0<<ans;
    }else cout<<ans;
}