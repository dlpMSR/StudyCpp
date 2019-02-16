#include<iostream>
using namespace std;


int findSumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int A, B, N;
    int sum = 0;
    int total = 0;
    cin >> N >> A >> B;
    for (int i=1;i<=N;++i){
        sum = findSumOfDigits(i);
        if (A<=sum && sum<=B) total += i;        
    }
    cout << total;
    return 0;
}
