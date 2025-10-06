#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    // while (testcases--)
    {
        int n, k;
        cin >> n >> k;
        string str, ans;
        cin >> str;
        vector<int> vh;
        for (int i = 1; i <= n; i++)
        {
            vh.push_back(i);
        }
        for(int i=0;i<vh.size();i++){
            cout<<vh[i]<<" ";
        }
        int k=0,l=n-1;
        for(int i=0;i<str.length();i++){
            if(str[i]==0){
                vh[k++]=0;
            }else if(str[i]==1){
                vh[l--]=INT_MAX;
            }else if(str[i]==2){
                
            }
        }
    }
}
