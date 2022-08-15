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


int coins[505];
int dp[505][40005];
int m, n;
#define MOD 1000000007


int f(int pos, int n)
{

	if ( n < 0)
		return 0;

	if (pos == m)
		return n == 0;


	int &ans = dp[pos][n];
	if (~ans) return ans;

	return ans = (f(pos, n - coins[pos]) + f(pos + 1, n)) % MOD;





}





void solve()
{
	int i, j, k , x, y, z, c = 0, cnt = 0;
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