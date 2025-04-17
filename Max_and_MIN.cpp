#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maximum(const vector<int>&v, int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (v[i] > maxi) {
            maxi = v[i];
        }
    }
    return maxi;

}

int minimum(const vector<int>&v, int n) {
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (v[i] < mini) {
            mini = v[i];
        }
    }
    return mini;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int r1 = maximum(v, n);
    int r2 = minimum(v, n);
    
    cout<<r2<<" "<<r1;
}