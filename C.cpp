#include <bits/stdc++.h>
using namespace std;

#define file(name) if (fopen(name".INP", "r")){freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}
#define all(v) v.begin(),v.end()
#define pb(a) push_back(a)
typedef long long ll;

vector<bool> sieve_of_eratosthenes(int n)
{
	vector<bool> is_prime(n+1,true);
	is_prime[0]= false, is_prime[1]=false;
	for (int p = 2; p * p <= n; p++) {
		if (is_prime[p]) {
			for (int i = p * p; i <= n; i += p) {
				is_prime[i] = false;
			}
		}
	}
	return is_prime;
}


void solution(){
	int n; cin>>n;
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	file("TEST");
	
	int test; cin >> test;
	while (test --> 0) solution();
	
	return 0;
}

