#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <random>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 2; i <= n; i++)
#define mp make_pair

using namespace std;
typedef long long ll;
const int mod = 1000000007;

int m, n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    int a[m + 1][n + 1];
    int b[m + 1][n + 1];
    f1(i, m) f1(j, n) cin >> a[i][j];
    f1(i, m) f1(j, n) cin >> b[i][j];

    int c[m + 1][n + 1];
    f1(i, m) f1(j, n) c[i][j] = a[i][j] + b[i][j];
    f1(i, m){
        f1(j, n) cout << c[i][j] << " ";
        cout << endl;
    }
}