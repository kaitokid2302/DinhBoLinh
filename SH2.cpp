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

bool isPrime(ll n){
    if(n < 2) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    if(isPrime(n)) cout << "YES";
    else cout << "NO";
}
// Độ phức tạp: O(sqrt(n)), giới hạn n <= 10^12, vì thế nên có khoảng sqrt(10^12) = 10^6 phép tính i cần kiểm tra, vậy nên không quá thời gian