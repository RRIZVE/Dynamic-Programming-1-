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

const int mx = 1e5 + 10;
ll a[mx];
ll dp[mx][6];
ll n, z, k;

ll f(int i, int kk, int zz)
{
	if (i > n || i < 1 || kk == k)
	{
		return 0;
	}
	if (dp[i][zz] != -1)
	{
		return dp[i][zz];
	}

	ll ans;

	ans = a[i] + f(i + 1, kk + 1, zz);

	if (zz < z)
	{
		ans = max(ans, a[i] + f(i - 1, kk + 1, zz + 1));
	}



	return dp[i][zz] = ans;


}




void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		ll i, j , m, x, y, c = 0, cnt = 0;
		string s;
		cin >> n >> k >> z;
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];

		}
		memset(dp, -1, sizeof(dp));
		x = f(2, 0, 0);
		cout << a[1] + x << endl;



















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