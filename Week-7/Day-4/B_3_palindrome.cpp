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
    string a1 = "a";
    string a2 = "aa";
    string b1 = "b";
    string b2 = "bb";

    int n; cin>>n;
    string ans = "";

    if(n % 2 == 0){
        int range = n / 2;
        bool isB = true;
        for (int i = 0; i < range; i++){
            if(isB){
                ans += b2;
                isB = false;
            }else{
                ans += a2;
                isB = true;
            }
        }
    }else{
        int range = n / 2;
        if(range == 0) ans += b1;
        else{
            bool isB = true;
            for (int i = 0; i < range; i++)
            {
                if(isB){
                    ans += b2;
                    isB = false;
                }else{
                    ans += a2;
                    isB = true;
                }
            }
            if(range % 2 == 0) ans += b1;
            else ans += a1;
        }
    }
    cout<<ans<<endl;
    return 0;
}