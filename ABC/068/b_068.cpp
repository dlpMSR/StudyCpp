#include<iostream>
using namespace std;

int N;
int ans = 1;
int niwa_max = 0;

int sub(int n){
    int count = 0;
    while(1){
        if (n%2!=0) break;
        n = n/2;
        ++count;
    }
    return count;
}

int main(){
    cin >> N;
    for (N;N>=1;--N){
        int subN = sub(N);
        if (niwa_max < subN){
            niwa_max = subN;
            ans = N;
        } 
    }
    cout << ans << endl;
}