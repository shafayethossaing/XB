#include<bits/stdc++.h>
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
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mx = (1 << 15);
vector<int> plindromes_all;

void palindromes() {
    for (int i = 0;i < mx;i++) {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        for (int j = 0;j < (len / 2);j++) {
            if (s[j] != s[len - j - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            plindromes_all.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    palindromes();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi cnt(mx), v;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cnt[x]++;
            v.push_back(x);
        }

        long long ans = n;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < plindromes_all.size();j++) {
                int curr = (v[i] ^ plindromes_all[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans/2) << '\n';
    }
    return 0;
}