# include <iostream>
# include <vector>
# include <map>
# include <stack>
# include <queue>
# include <algorithm>
# define ll long long
# define pll pair < ll, ll >
# define fs first 
# define se second
# define mp make_pair
# define pb push_back
# define rep(i, n) for( ll (i) = 0; (i) < (n); (i)++)
# define REP(i, n) for( ll (i) = 1; (i) <= (n); (i)++)
# define wl(i) while((i)--)
# define vec vector < ll >
# define ma map < ll, ll >
# define sf(i) scanf("%lld",&(i))
# define pr(i) printf("%lld ",(i))
# define prn(i) printf("%lld\n",(i))
# define cpr(i) cout<<(i)<<" "
# define cprn(i) cout<<(i)<<endl
# define csf(i) cin>>(i)
# define srt(v) sort( v.begin(), v.end() )
# define srtc(v, x) sort( v.begin(), v.end(), x)
# define srtr(v) sort( v.begin(), v.end(), greater< ll >())
# define mod 1000000007
# define MAX_PRIME 0
# define SEGMENT_MAX 0

using namespace std;

bool compare( const ll &a, const ll &b ){
	return a < b ;
}


float mx = 0;
int mark[100] ={0};

void init() {
	mx = 0;
	rep(i, 100) {
		mark[i] = 0;
	}
}

void permute(vector < float > v, vector < float > a, vector < float > b) {
	if((a.size() > (v.size() + 1) / 2) || (b.size() > (v.size() + 1) / 2))
		return;
	bool flag = true;
	for(int i = 0; i < v.size(); i++) {
		if(mark[i] == 0) {
			flag = false;
			mark[i] = 1;
			a.push_back(v[i]);
			permute(v, a, b);
			a.pop_back();
			b.push_back(v[i]);
			permute(v, a, b);
			b.pop_back();
			mark[i] = 0;
		}
	}
	if(flag == true) {
		if(a.size() != b.size()) {
			return;
		} else {
			float prod = 1;
			rep(i, a.size()) {
				prod = prod * (1 - a[i] * b[i]);
			}
			if(prod > mx) {
				mx = prod;
			}
		}
	}
}

int main(){
	freopen("read.txt", "r", stdin);
	freopen("write2.txt", "w", stdout);
	ll t;
	sf(t);
	REP(kr, t) {
		init();
		printf("Case #%lld: ",kr);
		ll n;
		cin >> n;
		vector < float > v;
		rep(i, 2 * n) {
			float x;
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		float prod = 1;
		rep(i, n) {
			prod = prod * (1 - v[i] * v[2 * n - 1 - i]);
		}
		printf("%0.6f\n", prod);
	}
	return 0;
}

