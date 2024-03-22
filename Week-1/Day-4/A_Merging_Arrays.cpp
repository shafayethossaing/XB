#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<int>v(n),v1(m), v2;
    for (int i = 0; i < n; i++) cin>>v[i];
    for (int i = 0; i < m; i++) cin>>v1[i];
 
    int i = 0, j = 0;
    while(i < v.size() and j < v1.size()){
        if(v[i] < v1[j]){
            v2.push_back(v[i]);
            i++;
        }
        else {
            v2.push_back(v1[j]);
            j++;
        }
    }
    while(i < n) v2.push_back(v[i]), i++;
    while(j < m) v2.push_back(v1[j]), j++;
    for(auto el:v2) cout<<el<<" ";
    return 0;
}