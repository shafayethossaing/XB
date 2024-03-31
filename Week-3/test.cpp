#include<bits/stdc++.h>
using namespace std;


int getSum(int i, int j, int n, int m, vector<vector<int>>v){
    int sum = 0;
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

    return sum;
}




int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>v[i][j];
        }
    }


    int sum = getSum(1,2,n,m,v);
    cout<<sum;
       
    return 0;
}