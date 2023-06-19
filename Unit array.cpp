// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> ar;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            ar.push_back(e);
            mp[e]++;
        }
        int low = INT_MAX;
        int high = 0;

        for (auto it : mp)
        {
            if (it.second < low)
            {
                low = it.second;
            }
        }
        for (auto it : mp)
        {
            if (it.second > high)
            {
                high = it.second;
            }
        }
        int out;

        if (n % 2 == 0)
        {
            if
        }
        else
        {
            if (low == 0)
            {
                for (auto it : mp)
                {
                    if (it.first == -1 && it.second == 0)
                    {
                        out = 0;
                    }
                }
            }
        }
    }
}