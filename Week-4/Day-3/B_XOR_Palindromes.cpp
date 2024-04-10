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
        string s; cin>>s;
        int must_fix = 0, pairs = 0;
        int i = 0, j = n-1;
        while(i < j){
            if(s[i] == s[j]) pairs += 2;
            else must_fix++;
            i++; j--;
        }

        // Calculation
        string ans = "";
        for (int i = 0; i <= n; i++)
        {
            // Total number of 1 needed
            int total = i;

            // Take ones from must_fix
            total -= must_fix;

            if(total < 0) {
                ans.pub('0'); 
                continue;
            }

            total = max((total % 2), total - pairs); 
            total = max(0, total - (n%2));


            if(total == 0) ans.pub('1');
            else ans.pub('0'); 
        }
        cout<<ans<<endl;
    }
    return 0;
}