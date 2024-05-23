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
    int n, target; cin>>n>>target;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
 
 
 
    int left = 0, right = 0, ans = 0, sum = 0;
    while(right < n){
        sum += v[right];
 
        // jodi shoma hoy target er
        if(sum == target){
            ans++;
            sum -= v[left]; // delete contribution
            left++;
        }
 
        // sum jodi boro hoye jay
        if(sum > target){
            while(sum > target){
                sum -= v[left];
                left++;
            }
            if(sum == target) ans++;
        }
        right++;
    }
 
    cout<<ans<<endl;
    
    return 0;
}