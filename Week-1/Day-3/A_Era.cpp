#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        
        int cnt = 0;
        int k = 0;
        int idx = 1;
        for (int i = 1; i <= n; i++)
        {
            if(a[k] > idx) {
                cnt = cnt + a[k]-idx;
                idx = idx + a[k]-idx;
            }
            idx++;
            k++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}