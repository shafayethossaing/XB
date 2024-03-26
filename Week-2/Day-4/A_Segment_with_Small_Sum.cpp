#include<bits/stdc++.h>
using namespace std;

int segment_with_small_sum(vector<int>v, long long int target){
    long long int sum = 0;
    int left = 0, right = 0, ans = 0;
    while(right < v.size()){
        sum += v[right];
        if(sum <= target){
            ans = max(ans, right-left+1);
        }else{
            sum -= v[left];
            left++;
        }
        right++;
    }
    return ans;
}

int main(){
    int n;
    long long int target; cin>>n>>target;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    cout<<segment_with_small_sum(v, target)<<endl;
    return 0;
}