#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = b - 1; i >= a; --i)
#define ALL(x) x.begin(), x.end()
#define SORT(x) sort(ALL(x))
#define RSORT(x) sort(ALL(x), greater<int>())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
void solve() {
// Write your code here
int n,k;
cin>>n>>k;
vector<vector<int>> a(n,vector<int>(n,0));
FOR(i,0,n){
    FOR(j,0,n){
        cin>>a[i][j];
    }
}

vector<vector<int>> b(n/k,vector<int>(n/k,0));
    FOR(i, 0, n / k) {
        FOR(j, 0, n / k) {
            b[i][j] = a[i * k][j * k];
        }
    }

FOR(i,0,n/k){
    FOR(j,0,n/k){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int tt = 1;
cin >> tt;
while (tt--) solve();
return 0;
}