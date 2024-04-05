#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long sum = 0;
        vector<int>v(n);
        for(int i = 0; i < n; i++) {
            cin>>v[i];
            v[i] >= 0 ? sum += v[i] : sum += v[i]*-1;
        } 
        
        int right = 0, cnt = 0;
        while(right < v.size()){
            if(v[right] < 0){
                cnt++;
                while(right < v.size() and v[right] <= 0){
                    right++;
                }
            }
            right++;
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}