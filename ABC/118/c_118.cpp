#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b==0) return a;
    else gcd(b, a%b);
}


int main(){
    int N;
    vector<int> A = {0};
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];
    int ans = A[0];
    sort(A.begin(), A.end());
    for (int i = 1;i < A.size(); ++i) {
        ans = gcd(ans, A[i]);
    }
    cout << ans << endl;
    return 0;
}
