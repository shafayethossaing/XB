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

int getRes(string s, int k){
    int left = 0, right = s.size()-1, ans = 0;
    char selected;
    bool isFirst = true, isNotPoss = false;
    while(left < right){
        if(s[left] == s[right]){
            left++; right--;
            continue;
        }
        if(s[left] != s[right] and isFirst){
            ans++;
            if(k == 1){
                selected = s[left];
                isFirst = false;
                left++;
            }else if(k == 2){
                selected = s[right];
                isFirst = false;
                right--;
            }
            continue;
        }
        if(s[left] != s[right]){
            ans++;
            if(s[left] == selected) left++;
            else if(s[right] == selected) right--;
            else{
                isNotPoss = true;
                ans = INT_MAX;
                break;
            }
            continue;
        }
    }
    return ans;
}


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        if(getRes(s, 1) == INT_MAX and getRes(s, 2) == INT_MAX) cout<<-1<<endl;
        else cout<<min(getRes(s, 1), getRes(s, 2))<<endl;
    }
    return 0;
}