#include<bits/stdc++.h>
using namespace std;
int main(){
    int days;
    cin>>days;
if(days<0) return 0;
    int month,year;

    year=days/365;
    days=days%365;

    month=days/30;
    days=days%30;
   cout<<year<<" years"<<endl;
   cout<<month<<" months"<<endl;
   cout<<days<<" days"<<endl;
   
}