#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long int n,k,s;
        cin>>n>>k>>s;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        long long int cnt = 0, i = 0, ans = 0;
        while(i < v.size()){
            while(i < v.size() and v[i] <= s){
                i++; cnt++;
                if(cnt >= k){
                    ans += (cnt - k) + 1;
                }
            }
            i++; cnt = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}