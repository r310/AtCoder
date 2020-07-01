#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;

    bool ans = false;
    rep(i, 0, x + 1) {
        int tsuru = i;
        int kame = x - i;

        if (tsuru * 2 + kame * 4 == y) ans = true;
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
