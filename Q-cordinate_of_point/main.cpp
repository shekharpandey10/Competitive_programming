#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    if(a>0&&b>0){
        cout<<"Q1"<<endl;
    }else if(a<0&&b>0){
        cout<<"Q2"<<endl;
    }else if(a<0&&b<0){
        cout<<"Q3"<<endl;
    }else if(a>0&&b<0){
        cout<<"Q4"<<endl;
    }else if(a==0&&b==0){
        cout<<"Origem";
    }else if(a==0&&b!=0){
        cout<<"Eixo y";
    }else{
        cout<<"Eixo X";
    }
}