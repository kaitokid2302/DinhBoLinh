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

    ll n; cin >> n;
    if(n==1){
        cout << 2;
        return 0;
    }
    ll a = 1, b = 1;
    for(int i = 3; i <= 100; i++){
        ll c = a + b;
        if(c > n){
            cout << i - 1;
            return 0;
        }
        a = b;
        b = c;
    }
    /* dãy số fibonacci phát triển rất nhanh
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377...
    Chỉ với 100 số fibonacci đầu tiên, số thứ 100 đã lớn hơn 10^19, tức là vượt quá giới hạn của số long long
    vì thế bài này, ta cứ for, đến khi nào nó gần như vượt quá long long thì thôi, số phép tính cũng không nhiều lắm
    GIới hạn n của đề bài là 10^18, tức là dưới kiểu long long, vì thế cũng không quá 100 phép tính là xong
    Công thức fibonacii là f(n) = f(n - 2) + f(n - 1)
    Nhưng ta không nhất thiết phải dùng mảng, vì chỉ cần 2 số trước đó, nên ta chỉ cần 2 biến a, b tượng trưng cho f(n - 2) và f(n - 1)
    Mỗi khi tính xong số fibonacii ở i, ta cập nhật lại a, b, để cho a = f(i - 1), b = f(i), để chuẩn bị cho lần lặp tiếp theo của i + 1
    */
}