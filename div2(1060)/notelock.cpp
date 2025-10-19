#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        int last_one = -k; // To track previous protected '1' or natural '1'

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                bool has_one_in_prev_k = false;
                for (int j = max(0, i - k + 1); j < i; j++)
                {
                    if (s[j] == '1')
                    {
                        has_one_in_prev_k = true;
                        break;
                    }
                }

                if (!has_one_in_prev_k)
                {
                    // Protect this position
                    count++;
                    i += k - 1; // Skip next k-1 positions
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
