#include <iostream>
#define ll long long
using namespace std;
void rec(int n, int count) {
    if (count > n) return;
    if (count > 1) cout << " ";
    cout << count;
    rec(n, count + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    rec(x, 1);
    return 0;
}
