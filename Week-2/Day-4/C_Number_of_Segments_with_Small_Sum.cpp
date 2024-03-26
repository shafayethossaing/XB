#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long target;
    cin>>n>>target;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    long long int left = 0, right = 0, ans = 0;
    long long sum = 0;
    while(right < n){
        sum += v[right];
        if(sum <= target){
            ans += right-left+1;
        }else{
            while(sum > target){
                sum -= v[left];
                left++;
            }
            if(sum <= target){
                ans += right-left+1;
            }
        }
        right++;
    }
    cout<<ans;
    return 0;
}