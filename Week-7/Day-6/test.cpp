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
        vll b, c;
        vector<bool> vis(n+1, false);
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x <= n){
                if(vis[x] == false) vis[x] = true;
                else b.pub(x);
            }else{
                b.pub(x);
            }
        }

        // C contains not visited elements
        for (int i = 1; i <= n; i++)
        {
            if(vis[i] == false) c.pub(i);
        }

        // Sorting b
        sorta(b);
        
        // Ans
        bool flag = true;
        for (int i = 0; i < b.size(); i++)
        {
            if(b[i] <= (2*c[i])) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<b.size()<<endl;
        else cout<<-1<<endl;
    }
    
       
    return 0;
}