// Two Sum II - Input array is sorted
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

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < numbers.size(); i++)
        {
            if (mp.find(target - numbers[i]) != mp.end())
            {
                return {mp[target - numbers[i]] + 1, i + 1};
            }
            mp[numbers[i]] = i;
        }
    }
};

void solve()
{
    Solution s;
    vi arr = {1, 2, 3, 4};
    int target = 3;
    vi ans = s.twoSum(arr, target);
    cout << ans[0] << " " << ans[1] << nn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}