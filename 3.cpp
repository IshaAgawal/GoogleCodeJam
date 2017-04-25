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
		printf("Case #%lld:\n",kr);
		ll d, n;
		sf(d); sf(n);
		char l[50][50];
		char a[5][6] = {"OOOOO", "O///O", "O/I/O", "O///O", "OOOOO"};  // 8
		char b[5][6] = {"OOOOO", "OO//O", "O/I/O", "O///O", "OOOOO"}; // 7
		char c[5][6] = {"OOOOO", "OOO/O", "O/I/O", "O///O", "OOOOO"}; // 6
		char z[5][6] = {"OOOOO", "OOOOO", "O/I/O", "O///O", "OOOOO"}; // 5
		char e[5][6] = {"OOOOO", "OOOOO", "OOI/O", "O///O", "OOOOO"};  // 4
		char f[5][6] = {"OOOOO", "OOOOO", "OOIOO", "O///O", "OOOOO"}; // 3
		char g[5][6] = {"OOOOO", "OOOOO", "OOIOO", "OO//O", "OOOOO"}; // 2
		char h[5][6] = {"OOOOO", "OOOOO", "OOIOO", "OOO/O", "OOOOO"}; // 1
		char o[5][6] = {"OOOOO", "OOOOO", "OOIOO", "OOOOO", "OOOOO"}; // 0
		rep(i, 8) {
			rep(j, 8) {
				if(n >= 8) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = a[k][m];
						}
					}
					n = n - 8;
				} else if(n == 7) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = b[k][m];
						}
					}
					n = n - 7;
 				} else if(n == 6) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = c[k][m];
						}
					}
					n = n - 6;
 				} else if(n == 5) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = z[k][m];
						}
					}
					n = n - 5;
 				} else if(n == 4) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = e[k][m];
						}
					}
					n = n - 4;
 				} else if(n == 3) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = f[k][m];
						}
					}
					n = n - 3;
 				} else if(n == 2) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = g[k][m];
						}
					}
					n = n - 2;
 				} else if(n == 1) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = h[k][m];
						}
					}
					n = n - 1;
 				} else if(n == 0) {
					for(int k = 0; k < 5; k++) {
						for(int m = 0; m < 5; m++) {
							l[i * 5 + k][j * 5 + m] = o[k][m];
						}
					}
 				}
			}
		}
		rep(i, 40) {
			printf("%s\n", l[i]);
		}
	}
	return 0;
}

