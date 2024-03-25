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
    
    ll a, b, c; cin >> a >> b >> c;

    // a, b đều là long long, nên có thể a + b sẽ quá long long, vì thế nếu cách thông thương ta sẽ cout << (a + b) % c
    // sẽ lỗi, vì trước khi chia lấy dư, đã có tổng a + b quá giới hạn của long long
    // nhưng ta để ý đề bài là c <= 10^9
    // Công thức toán học, ta có (a + b)%b = (a%b + b%b)%b
    // không chỉ 2 biến a, b, mà có thể 3 biến (a + b + c)%d = ((a%d + b%d)%d + c%d)%d
    // Không chỉ 3 biến, mà có thể n biến
    // Điều này rất quan trọng
    // Quay lại bài toán, ta có (a + b)%c = (a%c + b%c)%c
    // vì a%c, b%c < c, nên a%c + b%c < 2c, nên không bao giờ vượt quá giới hạn của long long
    // sau khi có a%c + b%c, ta lại chia lấy dư cho c, bởi vì a + b có thể vượt quá c, nên ta cần chia lấy dư
    // mà dù là a + b không vượt quá c, nhưng ta vẫn phải chắc chắn lại 1 lần nữa

    cout << (a % c + b % c) % c;
}