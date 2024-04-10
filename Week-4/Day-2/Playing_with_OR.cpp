#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin>>v[i];

        long long left = 0, right = 0, oddCnt = 0, ans = 0;
        while(right < v.size()){
            if(v[right] & 1) oddCnt++;
            if(right - left + 1 == k){
                // Check if odd
                if(oddCnt >= 1) ans++;

                // Contribution delete
                if(v[left] & 1) oddCnt--;
                left++; right++;
            }
            else{
                right++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
