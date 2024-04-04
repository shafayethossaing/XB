#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long int>v(n);
        priority_queue<long long int>pq;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] == 0){
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
            }
            pq.push(v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}