// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    vector<int> ar;
    map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        int e;
        cin >> e;
        ar.push_back(e);
        mp[e]++;
    }

    auto m = min_element(ar.begin(), ar.end());
    int flag = 0;
    for (auto v : mp)
    {
        if (v.first == *m && v.second == 1)
        {

            cout << distance(ar.begin(), m) + 1 << endl;
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Still Rozdil";
    }
}