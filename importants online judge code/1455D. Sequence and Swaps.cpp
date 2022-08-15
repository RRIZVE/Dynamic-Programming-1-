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

const int mx = 502;
int a[mx];
int dp[mx][mx][mx];
int n;

int f(int i, int x, int mx)
{
	if (i > n)
	{
		return 0;
	}
	if (dp[i][x][mx] != -1)
	{
		return dp[i][x][mx];
	}
	int ans = 1000;

	if (a[i] >= mx)
	{
		ans = min(ans, f(i + 1, x, max(mx, a[i])));

	}
	if (x >= mx && a[i] > x)
	{
		ans = min(ans, 1 + f(i + 1, a[i], max(mx, x)));
	}
	return ans;
}



void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		int i, j, k , m, x, y, z, c = 0, cnt = 0, xx = 0, yy = 0;
		string s;
		//memset(dp, -1, sizeof(dp));
		cin >> n >> x;
		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];


		}
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 0; j <= 500 ; j++)
			{
				for ( k = 0; k <= 500 ; k++)
				{
					dp[i][j][k] = -1;

				}


			}


		}
		y = f(1, x, 0);
		if (y >= 1000)
			y = -1;
		cout <<  y << endl;


















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