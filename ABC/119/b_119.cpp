#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    float x[12];
    string u[12];

    cin >> N;
    for (int i=0; i < N; ++i) {
        cin >> x[i];
        cin >> u[i];
    }

    float res = 0;
    for (int i = 0; i < N; ++i) {
        if (u[i] == "JPY") res += x[i];
        else res += 380000 * x[i];
    }

    cout << res <<endl;
    return 0;
}
