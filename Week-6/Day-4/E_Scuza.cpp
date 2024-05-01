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
        int n, q; cin>>n>>q;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        // Prefix Sum
        vll pre_sum(n);
        pre_sum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre_sum[i] = pre_sum[i-1] + v[i];
        }


        // Maxim
        vll maxim(n);
        maxim[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            maxim[i] = max(maxim[i-1], v[i]);   
        }

        while(q--){
            int x; cin>>x;
            auto it = upper_bound(All(maxim), x);
            ll check = (it - maxim.begin()) - 1;
            if(check >= 0){
                cout<<pre_sum[(it - maxim.begin()) - 1]<<" ";
            }else cout<<0<<" ";
        }
        cout<<endl;
    }

    return 0;
}