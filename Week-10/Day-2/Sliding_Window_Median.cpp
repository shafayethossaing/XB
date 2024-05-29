#include<bits/stdc++.h>
// PBDS
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

// PBDS
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main(){ Rocket;
    int n, k; cin>>n>>k;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }


    // Sliding window
    int left = 0, right = 0;
    vll ans;
    pbds<pair<ll, ll>>p;
    while(right < n){
        p.insert({v[right], right});

        // If it hits window
        if(right - left + 1 == k){
            if(k & 1) {
                auto it = p.find_by_order(k/2);
                ans.pub(it->first);
            }else{
                auto it = p.find_by_order((k/2)-1);
                ans.pub(it->first);
            }

            // Remove contribution
            p.erase({v[left], left});
            left++;
        }
        right++;
    }
    range(ans);
    
    
    return 0;
}