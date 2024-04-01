#include<bits/stdc++.h>
using namespace std;

long long int getSum(int i, int j, int n, int m, vector<vector<long long int>>&v){
    long long int sum = 0;
    // Top left
    int TLrow = i, TLcol = j;
    while(TLrow >= 0 and TLcol >= 0){
        sum += v[TLrow][TLcol];
        TLrow--, TLcol--;
    }

    // Bottom Right
    int BLrow = i+1, BLcol = j+1;
    while(BLrow != n and BLcol != m){
        sum += v[BLrow][BLcol];
        BLrow++, BLcol++;
    }

    // Top Right
    int TRrow = i-1, TRcol = j+1;
    while(TRrow >= 0 and TRcol != m){
        sum += v[TRrow][TRcol];
        TRrow--, TRcol++;
    }

    // Bottom left
    int BRrow = i+1, BRcol = j-1;
    while(BRrow != n and BRcol >= 0){
        sum += v[BRrow][BRcol];
        BRrow++, BRcol--;
    }
    return sum;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long int n,m; cin>>n>>m;
        vector<vector<long long int>> v(n, vector<long long int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin>>v[i][j];
            }
        }

        long long int sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = max(sum, getSum(i,j,n,m,v));
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}