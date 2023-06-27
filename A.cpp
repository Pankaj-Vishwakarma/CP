#include <bits/stdc++.h>
using namespace std;
 
#define file(name) if (fopen(name".INP", "r")){freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}
#define all(v) v.begin(),v.end()
const int maxn = 2e5 + 7;
const int inf = 1e9 + 7;
typedef long long ll;
 


void solution(){
    ll n,m;
    cin>>n>>m;
    vector<ll> brd(n), op(m);
    for(ll i=0;i<n; i++){ 
		ll temp;
		cin>>temp;
		brd[i]=temp;
	}
    for(ll i=0;i<m; i++){ 
		ll temp;
		cin>>temp;
		op[i]=temp;
	}
    sort(all(brd));
    sort(all(op));
    for(ll j=0, i=0; j<m; j++){
        if(i==n) i=0;
        brd[i++]=op[j];
    }
    cout<< accumulate(all(brd),0)<<"\n";
}
 
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	file("TEST");
	
	int test; cin >> test;
	while (test --> 0) solution();
	
	return 0;
}
