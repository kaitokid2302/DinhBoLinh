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
#define f0(i, n) for (int i = 0; i < (n); i++)
#define f1(i, n) for (int i = 1; i <= (n); i++)
#define f2(i, n) for (int i = 2; i <= (n); i++)
#define mp make_pair

using namespace std;
typedef long long ll;
const int mod = 1000000007;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    ll res = 0;
    f0(i, n){
        f0(j, n){
            ll x; cin >> x;
            if(i==0 || i == n - 1 || j == 0 || j == n - 1){
                res += x;
            }
        }
    }
    cout << res;
}
// các số thuộc biên là các số ở hàng đầu, hàng cuối, cột đầu, cột cuối, chỉ cần duyệt qua các số này và cộng vào biến res là xong