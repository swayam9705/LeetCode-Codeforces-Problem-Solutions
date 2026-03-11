
#include <iostream>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    long long offset = (k - 1) / (n - 1);
    long long result = k + offset;
    cout << result << endl;
}
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t) {
        solve();
        t--;
    }
 
    return 0;
}