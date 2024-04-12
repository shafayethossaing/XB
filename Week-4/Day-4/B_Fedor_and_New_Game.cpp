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
    int n,m,k; cin>>n>>m>>k;
    vll v(m+1);
    for(int i = 0; i <= m; i++) cin>>v[i];


    vector<vll> all_mask;
    for (int mask = 0; mask <= m; mask++)
    {
        vll a;
        for (int i = 0; i < n; i++)
        {
            if((v[mask] >> i) & 1) a.pub(1);
            else a.pub(0);
        }
        all_mask.pub(a);
    }
    

    // Calculating
    int ans = 0;
    vll fedor_mask = all_mask[m];
    for (int i = 0; i < all_mask.size()-1; i++)
    {
        vll a = all_mask[i];
        int diff = 0;
        for (int k = 0; k < n; k++)
        {
            if(fedor_mask[k] != a[k]) diff++;
        }

        if(diff <= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}