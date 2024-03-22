#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<long long>a(n),b(m);
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        long long val; cin>>val;
        sum += mp[val];
    }
    cout<<sum;
    
    return 0;
}

