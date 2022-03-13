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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // possibilities of dice
        // I - 1 ,6,5,2 (on side ) - 3,4 (on bottom and top)
        // II - 5,4,2,3  (On side ) - 1,6 (on bottom and top)
        // III - 1,3,4,6 (On side) - 2,5 (on bottom and top)
        // so on side sum is always - 14

        if (n >= 14 && (n % 14 >= 1 && n % 14 <= 6))
            cout << "YES" << ln;
        else
            cout << "NO" << ln;
    }
    return 0;
}