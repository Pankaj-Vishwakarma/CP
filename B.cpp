#include <bits/stdc++.h>
using namespace std;

#define file(name) if (fopen(name".INP", "r")){freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}

const int maxn = 2e5 + 7;
const int inf = 1e9 + 7;
typedef long long ll;
void solution(){

	int n, m;
	cin >> n>>m;
	int ans=0;
	for (int j = 0; j < 3; j++){
		vector<int> s1(n);
		bool ok=1;
		for (int i = 0; i < n; i++){
			cin>>s1[i];
			if((m|s1[i])== m && ok){
				ans|=s1[i];
			}else ok=0;
		}
	}
	if(ans==m) cout<<"Yes"<<"\n";
	else cout<<"No"<<"\n";
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	file("TEST");
	
	int test; cin >> test;
	while (test --> 0) solution();
	
	return 0;
}
