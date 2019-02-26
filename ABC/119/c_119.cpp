#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int N, A, B, C;
int l[10];
int min_mp = INT_MAX;

void calc(vector<int> v) {
    const int INF = INT_MAX;
    int res = 0;
    int num[N] = {0}; //バケット
    
    for (int i = 0; i < N; ++i) {
        ++num[v[i]];
    }
    if (num[0]!=0 && num[1]!=0 && num[2]!=0) {
        int la = 0;
        int lb = 0;
        int lc = 0;
        for (int i = 0; i < N; ++i) {
            if (v[i] == 0) {
                la += l[i];
            }
            else if (v[i] == 1) {
                lb += l[i];
            }
            else if (v[i] == 2) {
                lc += l[i];
            }
        }
        res = 10*(num[0]-1)+10*(num[1]-1)+10*(num[2]-1)+abs(la-A)+abs(lb-B)+abs(lc-C);
        if (res < min_mp) min_mp = res;
    }
}


void dfs(int depth, vector<int> v) {
    if (depth==N) calc(v);
    for (int i = 0; i < 4; ++i) {
        v[depth] = i;
        dfs(depth+1, v);
    }
}


int main(){
    cin >> N >> A >> B >> C;
    for (int i = 0; i < N; ++i) cin >> l[i];

    vector<int> v = {0};
    dfs(0, v);
    cout << "manko" << endl;
    cout << min_mp << endl;
    return 0;
}
