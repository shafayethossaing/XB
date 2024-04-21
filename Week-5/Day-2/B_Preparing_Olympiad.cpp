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
    ll ans = 0;
    int n, mnn, mxx, dif; cin>>n>>mnn>>mxx>>dif;
    vll v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for (int i = 0; i < (1<<n); i++)
    {
        ll mn = INT_MAX, mx = INT_MIN, sum = 0;
        vll check;
        
        bool isDiff = true;
        for (int bit = 0; bit < n; bit++)
        {
            if((i >> bit) & 1) {
                mn = min(mn, v[bit]);
                mx = max(mx, v[bit]);
                sum += v[bit];
                check.pub(v[bit]);
            }
        }
        if(sum >= mnn and sum <= mxx){
            for (int i = 0; i < check.size()-1; i++)
            {
                if(abs(check[i] - check[i+1]) < dif) {
                    isDiff = false;
                }
            }
            if(isDiff) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}