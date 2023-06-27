#include <bits/stdc++.h>
using namespace std;

#define file(name) if (fopen(name".INP", "r")){freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}

const int maxn = 2e5 + 7;
const int inf = 1e9 + 7;

void solution(){

	int n, id[maxn];
	cin >> n;
	long long sum2 = 0;
    long long opn = 0;

    int ok = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        if (val <= 0) {
            if (val < 0)
                ok = 1;
        } else {
            if (ok)
                opn++;

            ok = 0;
        }
        if (val < 0)
            val = val * -1;

        sum2 = sum2 + (long long)val;
    }
    if (ok)
        opn++;

    cout << sum2 << " " << opn << endl;

	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	file("TEST");
	
	int test; cin >> test;
	while (test --> 0) solution();
	
	return 0;
}
