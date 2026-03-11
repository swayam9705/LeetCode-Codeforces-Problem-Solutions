#include <iostream>
#include <algorithm>
#include <unordered_set>
 
using namespace std;
 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int b, g;
 
    cin >> b;
    int boys[b];
 
    for (int i = 0; i < b; i++) {
        cin >> boys[i];
    }
 
    sort(boys, boys + b);
 
    cin >> g;
    int girls[g];
 
    for (int i = 0; i < g; i++) {
        cin >> girls[i];
    }
    sort(girls, girls + g);
 
    int result = 0;
    int m = 0, n = 0;
 
    while (m < b && n < g) {
        if (abs(boys[m] - girls[n]) <= 1) {
            result++;
            m++;
            n++;
        }
        else {
            if (boys[m] > girls[n]) {
                n++;
            }
            else {
                m++;
            }
        }
    }
    cout << result << endl;
 
    return 0;
}