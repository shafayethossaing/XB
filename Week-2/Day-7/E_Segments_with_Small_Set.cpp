#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k; cin>>n>>k;
    vector<long long int>v(n);
    map<long long int, long long int>mp;
    
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    long long int left = 0, right = 0, ans = 0;
    while(right < n){
        mp[v[right]]++;
        if(mp.size() <= k){
            ans += right-left+1;
        }

        else{
            while(mp.size() > k and left < right){
                mp[v[left]]--;
                if(mp[v[left]] == 0){
                    mp.erase(v[left]);
                }
                left++;
            }
            if(mp.size() <= k){
                ans += right-left+1;
            }
        }
        right++;
    }
    cout<<ans;
    return 0;
}