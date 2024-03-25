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
    
    // đường chéo chính là các phần tử có chỉ số dòng = chỉ số cột, tức là chéo từ trên trái xuống dưới phải
    // đều bài yêu cầu tìm các đường chéo song song với đường chéo chính mà có tổng lớn nhất

    int n; cin >> n;
    ll a[n + 1][n + 1];
    f1(i, n) f1(j, n) cin >> a[i][j];

    ll res = -1e18;

    // tìm các đường chéo song song với đường chéo chính
    // TH1: đường chéo song song với đường chéo chính nằm ở dưới đường chéo chính
    f1(i, n){
        ll sum = 0;
        f0(j, n){
            int u = i + j, v = j + 1;
            if(u <= n && v <= n){
                sum += a[u][v];
            }
        }
        res = max(res, sum);
    }

    // TH2: đường chéo song song với đường chéo chính nằm ở trên đường chéo chính
    f1(j, n){
        ll sum = 0;
        f0(i, n){
            int u = i + 1, v = j + i;
            if(u <= n && v <= n){
                sum += a[u][v];
            }
        }
        res = max(res, sum);
    }
    cout << res;
}

// Bài này chưa ac, chưa biết sai ở đâu