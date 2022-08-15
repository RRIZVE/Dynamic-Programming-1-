//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
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

const int mx = 1e6;
ll c[mx];
vector<string>vs;
vector<string>vr;
ll dp[mx][2];
int n;

ll f(int i, int same)
{
	if (i == n - 1)
	{
		if (same == 0)
			return 0;
		else
			return c[i];
	}
	if (dp[i][same] != -1)
	{
		return dp[i][same];
	}

	ll ans = 2e18;

	if (same == 0)
	{
		if (vs[i + 1] >= vs[i])
		{
			ans = min(ans, f(i + 1, 0));
		}
		if (vr[i + 1] >= vs[i])
		{
			ans = min(ans, f(i + 1, 1));
		}

	}
	else
	{
		if (vs[i + 1] >= vr[i])
		{
			ans = min(ans, c[i] + f(i + 1, 0));
		}
		if (vr[i + 1] >= vr[i])
		{
			ans = min(ans, c[i] + f(i + 1, 1));
		}

	}

	return dp[i][same] = ans;



}



void solve()
{

	int i, j, k , m, x, y, z, cnt = 0;
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for ( i = 0; i < n ; i++)
	{
		cin >> c[i];

	}

	for ( i = 1; i <= n ; i++)
	{
		string s1;
		cin >> s1;
		vs.pb(s1);
		reverse(s1.begin(), s1.end());
		vr.pb(s1);
	}

	ll ans = 2e18;
	ans = min(ans, f(0, 0)); //index,same
	memset(dp, -1, sizeof(dp));
	ans = min(ans, f(0, 1)); //index , not same;

	if (ans >= 2e18)
		ans = -1;
	cout << ans << endl;






















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