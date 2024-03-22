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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = v.size() - mp.size();
        if (ans % 2 != 0) cout << mp.size() - 1 << endl;
        else cout << mp.size() << endl;
    }

    return 0;
}