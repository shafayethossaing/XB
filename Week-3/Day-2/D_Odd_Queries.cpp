#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<long long int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }


        vector<long long int>pre_sum(n);
        pre_sum[0] = v[0];
        for (int i = 1; i < n; i++) pre_sum[i] = pre_sum[i-1] + v[i];

        while(q--){
            long long int l,r,k; cin>>l>>r>>k;
            long long int sum = pre_sum[n-1];
            if(l == 1){
                sum -= (pre_sum[r-1]);
            }else{
                sum -= (pre_sum[r-1]-pre_sum[l-2]);
            }
            sum += ((r-l+1)*k);
            if(sum % 2 == 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}