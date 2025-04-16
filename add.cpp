#include<iostream>
#define ll long long
using namespace std;
ll addd(ll a, ll b) {
    return a + b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    ll b;
    cin>>a>>b;

    ll res = addd(a, b);
    cout<<res;
}