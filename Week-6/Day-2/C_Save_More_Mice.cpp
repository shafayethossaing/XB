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



int binarySearch(vll v, int target){
    int left = 0, right = v.size()-1 , ans = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(v[mid] < target){
            ans = mid;
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    return ans+1;
}



int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n, hole; cin>>hole>>n;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sortd(v);
        vll preSum(n);
        preSum[0] = hole - v[0];
        for (int i = 1; i < n; i++)
        {
            preSum[i] = preSum[i-1] + (hole - v[i]);
        }

        // Ans
        cout<<binarySearch(preSum, hole)<<endl;
    }
    return 0;
}