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
    int n, k; cin>>n>>k;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sorta(v);

    // Lamda Function
    auto ok = [&](ll mid){
        ll cnt = 0;
        for (int i = (n/2); i < n; i++)
        {
            if(v[i] < mid) {
                cnt += mid - v[i];
            }
        }
        return cnt <= k;
    };


    ll left = 0, right = 2e9, ans = 0;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(ok(mid)){
            ans = mid;
            left = mid + 1;
        }else{
            right = mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}