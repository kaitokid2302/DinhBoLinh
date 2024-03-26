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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // tổng lớn nhất trên các đường thẳng song song đường chéo phụ

    int n; cin >> n;
    int a[n + 1][n + 1];
    f1(i, n) f1(j, n) cin >> a[i][j];
    ll maxSum1 = 0; // maximum sum above the secondary diagonal
    ll maxSum2 = 0; // maximum sum below the secondary diagonal

    // Calculate the maximum sum above the secondary diagonal
    f1(i, n) {
        ll sum = 0;
        f1(j, n) {
            if (i + j <= n) {
                sum += a[i][j];
            }
        }
        maxSum1 = max(maxSum1, sum);
    }

    // Calculate the maximum sum below the secondary diagonal
    f1(i, n) {
        ll sum = 0;
        f1(j, n) {
            if (i + j >= n + 1) {
                sum += a[i][j];
            }
        }
        maxSum2 = max(maxSum2, sum);
    }

    cout << max(maxSum1, maxSum2);
}

// bài này chưa ac, chưa biết sai ở đâu