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

const int mx = 1e6;
int a[mx];
int dp[110][5050][110];
int vis[110][5050][110];

#define MOD 998244353
int n, len;

//n==100

int f(int i, int sum, int baki)
{
	if (i > n)
	{
		if (sum == 0 && baki == 0)
			return 1;
		else
			return 0;
	}
	if (vis[i][sum][baki] == len)
		return dp[i][sum][baki];



	int ans = f(i + 1, sum, baki);

	if (baki > 0)
	{
		ans = ans + f(i + 1, (sum + a[i]) % len, baki - 1);
	}

	vis[i][sum][baki] = len;

	return dp[i][sum][baki] = ans % MOD;
}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];

	}
	int ans = 0;
	for ( i = 1; i <= n ; i++)
	{
		len = i;
		ans = ans + f(1, 0, len);
		ans = ans % MOD;


	}
	//cout << "YES" << endl;
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