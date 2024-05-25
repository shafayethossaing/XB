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

// lcm
ll lcm(ll a, ll b){
    return (a/__gcd(a, b)) * b;
}

// Get Divisors of a Number (get all divisor's sum if you want)
vll divisors(ll digit){ vll factors;
    for (ll i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            factors.pub(i); 
            if((digit / i) != i) factors.pub(digit / i);
        }
    }
    return factors;
}

const int mx = 1e7;
bitset<mx> isPrime;
vector<int>primes;

// Sieve
void PrimeGen(int n){
    // Making all the odd numbers prime [Except 2, all the primes are odd]
    for(int i = 3; i <= n; i+=2) isPrime[i] = 1;

    // Filtering composite by Harmony Series
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i+=2){
        if(isPrime[i] == 1){
            for (int j = i*i; j <= n; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    // Pushing Primes
    isPrime[2] = true;
    primes.push_back(2);
    for (int i = 3; i <= n; i+=2){
        if(isPrime[i] == 1) primes.push_back(i); 
    }
}

// Single number primality check
bool checkPrimality(ll n){
    if( n <= 1) return false;
    if( n <= 3) return true;
    if( n % 2 == 0 or n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}



// Prime Factorization
vector<int> prime_fact(int n){
// 10 to the power 7 er jonno (392) bar operataion cholbe 
    vector<int>prime_factors;
    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0){
            while(n % i == 0){
                prime_factors.push_back(i);
                n = n/i;
            }
        }
    }
    // If we need one more prime
    if(n > 1) prime_factors.push_back(n);
    return prime_factors;
}



int main(){ Rocket;
    ll t; cin>>t;
    while(t--){
        ll a, b; cin>>a>>b;
        if(a<b){
            ll ans;
            if(b & 1){
                ans = (b*b) - a+1;
            }else{
                ans = ((b-1)*(b-1)) + a;
            }
            cout<<ans<<endl;
        }else{
            ll ans;
            if(a & 1){
                ans = ((a-1)*(a-1)) + b;
            }else{
                ans = (a*a) - b+1;
            }
            cout<<ans<<endl;
        }
    }


    return 0;
}