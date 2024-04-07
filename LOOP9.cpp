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
    
    ll n; cin >> n;
    ll res = 0;
    for(ll i = 1; i <= sqrt(n); i++){
        ll x = i;
        ll y = n/i;
        res += (x + y);
        if(x == y){
            res -= x;
        }
    }
    res -= n;
    if(res == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
// Với mỗi i từ 1 đến căn bậc 2 của n, ta sẽ tìm được 2 số x và y sao cho x*y = n
// Với mỗi cặp x và y, ta cộng x và y vào res
// Nếu x = y tức là x = sqrt(n), ta đã cộng cả x và y, nên ta phải trừ 1 trong 2 đi, vì nó lặp lại
// Sau khi cộng hết tất cả các cặp x và y, ta sẽ trừ n ra khỏi res, vì ta không tính chính nó, theo đề bài