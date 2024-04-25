// !
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll, ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(), (X).end()
#define Unique(X) (X).erase(unique((X).begin(), (X).end()), (X).end())
#define range(arr)      \
    for (auto el : arr) \
        cout << el << " ";
#define Rocket                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int binarySearch(vll &v, int targetSum)
{
    int left = 0, right = v.size() - 1, ans = v.size();
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (v[mid] >= targetSum)
        {
            ans = mid+1;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

int main()
{
    Rocket;
    int n;
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vll preSum(n);
    preSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i-1] + v[i];
    }
    
    int q; cin>>q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << binarySearch(preSum, x) << endl;
    }
    return 0;
}