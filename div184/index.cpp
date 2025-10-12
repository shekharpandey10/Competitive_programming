#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 0;
        int mex = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        bool check=false;
        for(auto m:mp){
            if(k!=m.first){
                cout<<k<<endl;
                check=true;
                break;
            } k++;
        }
        if(!check)  cout<<k<<endl;
    }
}

