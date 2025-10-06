#include<bits/stdc++.h>
using namespace std;

int main(){
    int nephews=3;
    int testcases;
   vector<int>arr;
    cin>>testcases;
    
    while(testcases--){
        int test;
        cin>>test;
      int ans=test%nephews;
      if(!ans) arr.push_back(ans);
      else arr.push_back(nephews-ans);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

