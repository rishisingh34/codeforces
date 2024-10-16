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

typedef vector<int> vi;
typedef pair<int,int> pii;

const int MOD = 1e9+7;
const int INF = 1e18;


int solve() {
    int n ;
    cin >> n ;
    vi a(n) ; 
    vi b(n) ; 
    vi c(n) ; 
    vector<pii> p1 ;
    vector<pii> p2 ;
    vector<pii> p3 ;
    rep(i, 0, n) {
        cin >> a[i] ;
        p1.pb(mp(a[i], i)) ;
    }
    rep(i, 0, n) {
        cin >> b[i] ;
        p2.pb(mp(b[i], i)) ;
    }
    rep(i, 0, n){
        cin >> c[i] ;
        p3.pb(mp(c[i], i)) ;
    }

    sort(all(p1), greater<>()); 
    sort(all(p2),  greater<>()) ;
    sort(all(p3), greater<>()); 
    int maxSum = 0 ; 
    rep(i, 0, 3) {
        rep(j, 0 , 3){
            rep(k, 0, 3) {
                if( p1[i].se != p2[j].se && p2[j].se != p3[k].se && p1[i].se != p3[k].se){
                    maxSum = max(maxSum, p1[i].fi + p2[j].fi + p3[k].fi) ; 
                }
            }
        }
    }

    return maxSum ; 
}


int32_t main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl ; 
    }
    return 0;
}