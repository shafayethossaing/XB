#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, target; cin>>n>>target;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    long long int left = 0, right = 0, ans = 0, cnt = 0;
    long long sum = 0;
    while(right < n){
        sum += v[right];
        while(sum >= target){
            ans += ((n-cnt) - (right-left+1))+1;
            sum -= v[left];
            left++;
            cnt++;
        }
        right++;
    }
    cout<<ans;
    return 0;
}