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

const int mx = 5100;
ll a[mx];
ll presum[mx];
ll dp[mx][mx];
ll n, m, k;

ll f(int i, int cnt)
{
	if (i > n)
		return 0;
	if (cnt == k)
		return 0;
	if (dp[i][cnt] != -1)
	{
		return dp[i][cnt];
	}
	ll ans1 = -1e9, ans2 = -1e9;
	if (i + m - 1 <= n)
	{
		ans1 = f(i + m, cnt + 1) + (presum[i + m - 1] - presum[i - 1]);
	}

	ans2 = f(i + 1, cnt);

	return dp[i][cnt] = max(ans1, ans2);



}




void solve()
{

	int i, j, x, y, z, c = 0;
	string s;
	memset(dp, -1, sizeof(dp));
	cin >> n >> m >> k;
	presum[0] = 0;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];
		presum[i] = presum[i - 1] + a[i];

	}
	cout << f(1, 0) << endl;





















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