#include <iostream>
 
using namespace std;
 
void solve() {
    int a, b, c, d;

    // Read the four stick lengths
    if (!(cin >> a >> b >> c >> d)) return;
 
    // A square requires all four sides to be of equal length
    if (a == b && b == c && c == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}