#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }



        vi bit(30);
        for (int i = 0; i < 30; i++)
        {
            // Counting every set bit of each number one by one ==> 0th bit of = [a[j], a[j+1], a[j+2].....a[n]]
            // Counting every set bit of each number one by one ==> 1th bit of = [a[j], a[j+1], a[j+2].....a[n]]
            // Counting every set bit of each number one by one ==> 2th bit of = [a[j], a[j+1], a[j+2].....a[n]]
            for (int j = 0; j < n; j++)
            {
                if((v[j] >> i) & 1) bit[i]++;
            }
        }
    
        // Check if divisible by k
        for (int k = 1; k <= n; k++)
        {
            bool isDivisible = true;
            for (int Columnbits = 0; Columnbits < 30; Columnbits++)
            {
                if(bit[Columnbits] % k != 0) {
                    isDivisible = false;
                    break;
                } 
            }
            if(isDivisible) {
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}