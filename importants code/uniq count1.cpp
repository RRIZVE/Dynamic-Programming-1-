#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const ll mx = 1e6;
ll coins[505];
ll dp[505][40005];
ll m, n;
#define MOD 1000000007

ll f(ll pos, ll n)
{
	if (n == 0)
		return 1;
	if (pos >= m)
		return 0;
	if (coins[pos] > n)
		return n == 0;
	if ( n < 0)
		return 0;

	if (dp[pos][n] != -1 )
		return dp[pos][n];

	ll ans;

	ans = (f(pos, n - coins[pos]) + f(pos + 1, n)) % MOD;

	return dp[pos][n] = ans ;





}





void solve()
{
	ll i, j, k , n, x, y, z, c = 0, cnt = 0;
	j = 0;
	for ( i = 1; i <= 40000 ; i++)
	{
		string s, s1;
		s = to_string(i);
		s1 = s;
		reverse(s1.begin(), s1.end());
		if (s == s1)
		{
			coins[j++] = i;
			//cout << i << "  ";
		}


	}
	m = j;
	int t;
	cin >> t;
	memset(dp, -1, sizeof(dp));
	while (t--)
	{


		cin >> n;
		cout << f(0, n) << endl;

		/*
		5
		>>7

		5=1+1+1+1+1
		5=1+1+1+2
		5=1+2+2
		5=1+1+3
		5=2+3
		5=1+4
		5=5

		*/


	}










}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}