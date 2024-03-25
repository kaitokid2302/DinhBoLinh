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
const int N = 102;

int n, a[N][N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    bool ok = true;

    f1(i, n) f1(j, n) cin >> a[i][j];
    f1(i, n) f1(j, n){
        if(i > j){
            if(a[i][j] != 0){
                ok = false;
                break;
            }
        }
    }
    if(ok){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}