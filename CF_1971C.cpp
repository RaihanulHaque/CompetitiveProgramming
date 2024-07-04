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
    int a, b, c, d, minus1, minus2;
    int arr[12];
    cin >> a >> b >> c >> d;
    minus1 = abs(a - b);
    minus2 = abs(12 - minus1);
    int diff = min(minus1, minus2);
    string str = "";
    for (int i = 1; i <= 12; i++)
    {
        if (i == a || i == b)
            str += "a";
        if (i == c || i == d)
            str += "b";
    }
    if (str == "abab" || str == "baba")
    {
        cout << "YES" << nn;
    }
    else
    {
        cout << "NO" << nn;
    }
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