#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    map<int, int>mp;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    for (int i = 1; i <= n; i++) if(mp[i] == 0) cout<<i<<endl;
    return 0;
}
