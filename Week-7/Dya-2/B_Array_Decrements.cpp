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
        int n; cin>>n;
        vll a(n), b(n);
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < n; i++) cin>>b[i];

        // Get the min diff
        ll diff = INT_MAX;
        bool isNeg = false;
        for (int i = 0; i < n; i++)
        {
            if(a[i] - b[i] < 0){
                isNeg = false;
                break;
            }else{
                if(b[i] != 0){
                    diff = min(diff, a[i]-b[i]);
                }
            }
        }

        // Check each diff
        if(isNeg) no;
        else{
            isNeg = true;
            for (int i = 0; i < n; i++)
            {
                if(b[i] != 0){
                    if(a[i] - b[i] > diff || (a[i] - b[i] < diff and b[i] != 0)) {
                        isNeg = false;
                        break;
                    }
                }else{
                    if(a[i] - b[i] > diff){
                        isNeg = false;
                        break;
                    }
                }
            }
            if(!isNeg) no;
            else yes;
        }
        
       
    
    }
       
    return 0;
}