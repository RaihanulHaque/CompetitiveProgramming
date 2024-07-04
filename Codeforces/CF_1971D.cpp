#include <bits/stdc++.h>
using namespace std;

//===========Ahh!!===========
#define ll long long
#define MAX 1000000000
#define si(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define pi(n) printf("%d\n", n)
#define pl(n) printf("%lld\n", n)
#define ps(s) printf("%s\n", s)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define nn "\n"
#define pb push_back
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
//===========SENSEI===========

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int flag = false;
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            cnt++;
        }
        if (str[i] == '0' && str[i + 1] == '1')
        {
            flag = true;
        }
    }
    if (flag)
    {
        cnt--;
    }
    cout << cnt << nn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}