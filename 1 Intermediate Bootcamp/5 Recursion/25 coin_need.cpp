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

const int mx = 1e6;
int a[mx];
int n, target;
vector<int>v;

int f(int pos, int target)
{
	if (target == 0)
		return 0;
	if (pos == n)
		return 1e9;


	//v[pos] nibo
	int nia_ans = 1 + f(pos + 1, target - v[pos]);

	//v[pos] nibo na
	int na_nia_ans = f(pos + 1, target);

	return min(nia_ans, na_nia_ans);

}


void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n >> target;
	v.resize(n);
	for ( i = 0; i < n ; i++)
	{
		cin >> v[i];


	}

	//cout << "ans   : " << f(target) << endl;
	cout  << f(0, target) << endl;







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