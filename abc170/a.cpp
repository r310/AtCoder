#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main(void) {
    int x;
    rep(i, 0, 5) {
        cin >> x;
        if (x == 0) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
