#include <iostream>
 
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    string results[t];
    
    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;
        int l = word.size();
        
        if (l > 10) {
            results[i] = word[0] + to_string(l - 2) + word[l - 1];
        }
        else {
            results[i] = word;
        }
    }
    
    for (string r : results) {
        cout << r << endl;
    }
    
    return 0;
}