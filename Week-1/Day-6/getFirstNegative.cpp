#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int n, k; cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }


    // -8, 2, 3, -6, 1 =
    // queue = -8 -6
    // ans = -8

    vector<int>ans;
    int left = 0, right = 0;
    while(right < n){
        if(v[right] < 0) q.push(v[right]);

        if(right-left+1 == k){
            // if q is not empty
            if(!q.empty()){
                cout<<q.front()<<" ";
                if(v[left] == q.front()) q.pop();
                left++;
            }else {
                cout<<0<<" ";
                left++;
            }
            right++;
        }
        else right++;
    }
    // for(auto el:ans) cout<<el<<" ";

    return 0;
}
