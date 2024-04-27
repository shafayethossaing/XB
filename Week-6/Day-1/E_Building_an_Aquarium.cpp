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


ll modified_binary_search(vll v, int target){
    int left = 0, right = 2000000002, ans = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        // Calculating sum for each mid
        ll sum = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if(mid - v[j] <= 0) sum += 0;
            else {
                sum += (mid - v[j]);
            }
        }

        if(sum <= target){
            ans = mid;
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    return ans;
}
// 0 1 4 8 13 19 26 



int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        ll n, high; cin>>n>>high;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        cout<<modified_binary_search(v, high)<<endl;
    }
    return 0;
}