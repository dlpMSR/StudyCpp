#include <iostream>
using namespace std;

int main()
{
    int A, B, C, X;
    int total;
    int ans = 0;
    cin >> A >> B >> C >> X;
    for (int i = 0; i <= A; ++i)
    {
        for (int j = 0; j <= B; ++j)
        {
            for (int k = 0; k <= C; ++k)
            {
                total = 500*i + 100*j + 50*k;
                if (total == X) ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
