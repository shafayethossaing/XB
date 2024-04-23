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
        vll b;
        for(int i = 0; i < (n*n - n)/2; i++){
            int val; cin>>val;
            b.pub(val);
        }   

        sorta(b);

        int x = 1;
        int frombToA = n - x, i = 0;
        vi a(n);
        while(n - x > 0){
            a[i] = b[frombToA - 1];
            x++; i++;
            frombToA += n - x;
        }
        a[n-1] = 1000000000;
        range(a);
        cout<<endl;
    }
    return 0;
}