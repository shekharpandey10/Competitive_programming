#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    if(n==floor(n)){
        cout<<"int "<<n;
    }else{
        cout<<"float "<<floor(n)<<" "<<n-floor(n);
    }
}