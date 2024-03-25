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
    
    int n; cin >> n;
    int res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    cout << res;

    // Đã từng đề cập trước đây, while(t--) hay while(n) đều mang ý nghĩa là khi t còn lớn hơn 0, hoặc n còn lớn hơn 0
    // nhưng đối với while(t--), thì t sẽ giảm đi 1 sau mỗi lần lặp, còn while(n) thì n không thay đổi
    // Nhưng bên trong vòng lặp, ta đã n = n / 10, nghĩa là n sẽ giảm đi 1 chữ số sau mỗi lần lặp
    // nghĩa là nó sẽ chạm đến 0, và vòng lặp sẽ dừng, không sợ bị lặp vô hạn

    // phần còn lại khá dễ hiểu, tách chữ số cuối cùng, cộng vào res, sau đó chia n cho 10, để lấy chữ số tiếp theo
    // rồi lại chấy chữ số cuối cùng
}