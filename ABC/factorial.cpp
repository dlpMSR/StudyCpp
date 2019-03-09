#include <iostream>
#include <algorithm>
using namespace std;

int fact(int n) {
    int m;

    if (n==0) return 1;
    m = fact(n - 1);
    return n*m; 
}

int main(){
    int N;
    cin >> N;
    cout << fact(N);
    return 0;
}
