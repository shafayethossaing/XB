#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}

int main(){
    int t; cin>>t;
        while(t--){
            int n; cin>>n;
        vector<pair<int, int>>v, v1, v2;
        for (int i = 0; i < n; i++)
        {
            int val; cin>>val;
            v.push_back({val, i});
        }
        for (int i = 0; i < n; i++)
        {
            int val; cin>>val;
            v1.push_back({val, i});
        }
        for (int i = 0; i < n; i++)
        {
            int val; cin>>val;
            v2.push_back({val, i});
        }
        
        // sorting
        sort(v.begin(), v.end(), sortbysec);
        sort(v1.begin(), v1.end(), sortbysec);
        sort(v2.begin(), v2.end(), sortbysec);

        int ans = 0;
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if(v[i].second != v1[j].second and v[i].second != v2[k].second and v1[j].second != v2[k].second){
                        ans = max(ans, v[i].first + v1[j].first + v2[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
