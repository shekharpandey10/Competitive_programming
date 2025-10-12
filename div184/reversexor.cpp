#include <bits/stdc++.h>
using namespace std;
string getBinary(long n)
{
    string s = bitset<32>(n).to_string();
    // cout << s << " thik vala"; 
    s.erase(0, s.find_first_not_of('0'));
    // cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]!='0'){
            s.substr(s.length())
        }
    }
    return s==""?"0":s;
}
string reversebinary(string s)
{
    reverse(s.begin(), s.end());
  
    // cout << s << endl;
   return s==""?"0":s;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        if(n==0) {cout<<"YES"<<endl; continue;}
        bool check=false;
        for (int i = 0; i < n; i++)
        {
            string binary = getBinary(i);
            string revbinary = reversebinary(binary);
            cout<<binary<<" "<<revbinary<<endl;
             if (binary.empty() || revbinary.empty()) {
                continue;  // Skip this iteration if either binary string is empty
            }
            long finalbin=stoll(binary);
            long finalrevbin=stoll(revbinary);
            if (finalbin^finalrevbin ==n && finalbin^finalrevbin >0){
                cout << "YES" << endl;
                check=true;
                break;
           }

        }
        if(!check) cout<<"NO"<<endl;
    }
}