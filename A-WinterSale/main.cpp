#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,p;
    cin>>x>>p;
    float currentPer=100-x;
    float prevPrice=(p/currentPer)*100;
    cout<<fixed<<setprecision(2)<<prevPrice;
}