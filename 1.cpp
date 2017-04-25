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


int main(){
	freopen("read.txt", "r", stdin);
	freopen("write.txt", "w", stdout);
	ll t;
	sf(t);
	REP(kr, t) {
		printf("Case #%lld: ",kr);
		ll n, k;
		sf(n); sf(k);
		int seatHash[101] = {0};
		int seat[101][101] = {0};
		rep(i, n) {
			ll a, b;
			cin >> a >> b;
			if(a > b) {
				swap(a, b);
			}
			if(seat[a][b]) {
				continue;
			}
			seat[a][b] = 1;
			if(a != b) {
				seatHash[a]++;
				seatHash[b]++;
			} else {
				seatHash[a]++;
			}
		}
		ll mx = 0;
		rep(i, 101) {
			if(seatHash[i] > seatHash[mx]) {
				mx = i;
			}
		}
		cout << seatHash[mx] << endl;
	}
	return 0;
}

