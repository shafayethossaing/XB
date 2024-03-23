#include<bits/stdc++.h>
using namespace std;

bool solve(int i, int j, vector<int>v){
    while(i<j){
        if(v[i] != v[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int a,b, i = 0, j = n-1;
        bool isUnMatched = true;
        while(i<j){
            if(v[i] != v[j]){
                isUnMatched = false;
                a = v[i], b = v[j];
                break;
            }
            i++, j--;
        }

        if(isUnMatched) cout<<"YES"<<endl;
        else{
            vector<int>first, second;
            for (int i = 0; i < v.size(); i++)
            {
                if(v[i] != a) first.push_back(v[i]);
                if(v[i] != b) second.push_back(v[i]);
            }

            if(solve(0, first.size()-1, first) || solve(0, second.size()-1, second)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}