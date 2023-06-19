// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> ar, ar2;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        ar.push_back(e);
    }

    int s = 0;
    int save = ar[0];
    ar2.push_back(save);

    for (int i = 1; i < n; i++)
    {
        if (ar[i] + save >= k)
        {
            save = ar[i];
            ar2.push_back(ar[i]);
        }
        else
        {
            int d = k - save - ar[i];
            s += d;
            ar2.push_back(d + ar[i]);
            save = d + ar[i];
        }
    }
    cout << s << endl;

    for (int i = 0; i < n; i++)
    {
        cout << ar2[i] << " ";
    }
}