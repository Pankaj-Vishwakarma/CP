#include <bits/stdc++.h>
using namespace std;
 
#define file(name) if (fopen(name".INP", "r")){freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}
#define all(v) v.begin(),v.end()
#define pb(a) push_back(a)
const int maxn = 2e5 + 7;
const int inf = 1e9 + 7;
typedef long long ll;
 


void solution(){
    int n;
    cin>>n;
  
    vector<vector<int>> v(n-1);
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n-1;j++){
            int t; cin>>t;
            if(v[i].size()==0) v[i].push_back(t);
            else if(v[i][0]!=t)v[i].push_back(t);
        }
    }
    vector<int> ans;
    // if(v[0][0]==v[1][0]) ans.pb(v[0][1]), ans.pb(v[0][0]);
    // else if(v[0][0]==v[1][1]) ans.push_back(v[0][1]), ans.pb(v[0][0]);
    // else ans.push_back(v[0][0]), ans.pb(v[1][0]);
    for(int i=1;i<n-1;i++){
        if(v[i][0]==ans.back()) ans.push_back(v[i][1]);
        else ans.push_back(v[i][0]);
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}
 
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	file("TEST");
	
	int test; cin >> test;
	while (test --> 0) solution();
	
	return 0;
}
