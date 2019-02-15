#include <iostream>
#include <climits>
using namespace std;

int N;
int A[102];
int max_A = INT_MIN;
int min_A = INT_MAX;

int main(){
    cin >> N;
    for(int i=0;i<N;++i) cin >> A[i];
    for(int i=0;i<N;++i){
        if(max_A < A[i]) max_A = A[i];
        if(min_A > A[i]) min_A = A[i];
    }
    cout << max_A - min_A;

    return 0;
}
