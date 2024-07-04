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

bool isValidSudoku(vvi &board)
{
    bool ans = true;
    int n = 9;
    unordered_map<char, int> umap[9];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num = board[i][j];
            if (num != 0)
            {
                char current = board[i][j];
                if (current != '.')
                {
                    if (umap[i][current] > 0 || umap[j + 9][current] > 0 || umap[(i / 3) * 3 + j / 3 + 18][current] > 0)
                    {
                        return false;
                    }
                    umap[i][current]++;
                    umap[j + 9][current]++;
                    umap[(i / 3) * 3 + j / 3 + 18][current]++;
                }
            }
        }
    }

    return ans;
    // print(umap);
    // for (int i = 0; i < 27; i++)
    // {
    //     for (auto x : umap[i])
    //     {
    //         cout << x.first << " " << x.second << nn;
    //     }
    // }
    // return ans;
}

void solve()
{
    vvi board = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                 {6, 0, 0, 1, 9, 5, 0, 0, 0},
                 {0, 9, 8, 0, 0, 0, 0, 6, 0},
                 {8, 0, 0, 0, 6, 0, 0, 0, 3},
                 {4, 0, 0, 8, 0, 3, 0, 0, 1},
                 {7, 0, 0, 0, 2, 0, 0, 0, 6},
                 {0, 6, 0, 0, 0, 0, 2, 8, 0},
                 {0, 0, 0, 4, 1, 9, 0, 0, 5},
                 {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    isValidSudoku(board);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}