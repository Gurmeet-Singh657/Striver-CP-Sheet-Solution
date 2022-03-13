#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define loop(a, b) for (int i = a; i < b; i++)
#define rloop(a, b) for (int i = b; i >= a; i--)
#define autoloop(arr) for (auto i : arr)
#define inputloop(arr, n)       \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define msi multiset<int>
#define sti stack<int>
#define pqi priority_queue<int>
#define pminh priority_queue<int, vector<int>, greater<int>>
#define qi queue<int>
#define mii map<int, int>
#define mci map<char, int>
#define mvi map<int, vi>
#define mpi map<int, pii>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pb push_back
#define gi greater<int>
#define lb(v, a) lower_bound(v.begin(), v.end(), a) - v.begin()
#define ub(v, a) upper_bound(v.begin(), v.end(), a) - v.begin()
#define bs(v, a) binary_search(v.begin(), v.end(), a)
#define maxe(a) a[max_element(se(a)) - a.begin()]
#define mine(a) a[min_element(se(a)) - a.begin()]
#define se(a) a.begin(), a.end()
#define sa(a) accumulate(se(a), 0)
#define ss second
#define ff first
#define ln '\n'
#define line cout << ln
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    /*
    for k=1
    1 1
    2 2
    3 3
    4 4
    5 5
    6 6
    7 7
    8 8
    9 9

    for k=2
    10 1
    11 2
    12 3
    13 4
    14 5
    15 6
    16 7
    17 8
    18 9

    for k=3
    19 1
    20 2
    21 3
    22 4
    23 5
    24 6
    25 7
    26 8
    27 9

    ...........
    */
    while (n--)
    {
        int k, x;
        cin >> k >> x;
        int val = 9 * (k - 1) + x;
        cout << val << endl;
    }
    return 0;
}