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


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        vll suf(n, 0);
        suf[n-1] = 1;
        for (int i = n-2; i >= 0; i--)
        {
            suf[i] = suf[i+1] + (v[i] == v[n-1]);
        }

        if(v[0] == v[n-1]){
            if(suf[0] >= k){
                yes;
                continue;
            }
        }

        bool ok = false;
        ll cnt = 0;
        for (int i = 0; i <= n-2; i++)
        {
            cnt += (v[i] == v[0]);
            if(cnt % k == 0 and suf[i+1] >= k){
                ok = true;
                break;
            }
        }

        if(ok) yes;
        else no;
    }
    return 0;
}