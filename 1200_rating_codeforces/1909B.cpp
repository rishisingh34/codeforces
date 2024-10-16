#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define endl '\n'
#define sz(x) (int)(x).size()
#define rep(i,a,b) for(int i=a; i<b; i++)
#define per(i,a,b) for(int i=a; i>b; i--)
#define ll long long 

typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pii;

const int MOD = 1e9+7;
const int INF = 1e18;

int solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x : a) {
        cin >> x;
    }

    set<int> b;  
    int res = 2; 
    while(res <= INF) {
        b.clear();
        rep(i, 0, n) {
           b.insert(a[i] % res);  
        }

        if (b.size() == 2) {
            return res; 
        }
        res *= 2; 
    }    

    return -1;  
}

int32_t main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl; 
    }
    return 0;
}
