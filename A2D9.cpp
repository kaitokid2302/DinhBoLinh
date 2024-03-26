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
    // Bài này để ý tam giác dưới đường chéo chính là những ô mà có i > j
    // Ok là 1 biến cờ - flag, ban đầu gán cho biến cờ 1 giá trị nào đó, sau này nếu có điều kiện gì đó 
    // không thoả mãn, thì gán biến cờ là 1 gía trị khác, để biết rằng có điều kiện gì đó không đúng
    // Sau này ra khỏi vòng lặp hoặc hàm, kiểm tra biến cờ, nếu biến cờ đã thay đổi giá trị ban đầu 
    // thì nghĩa là có điều kiền nào đó không thoả mãn, tức là bài toán không đúng 100%, còn biến cờ không đổi giá trị
    // tức là bài toán đúng 100%
    // biến cờ rất quan trọng trong tin, 100% bài toán đều dùng biến cờ

    
}