#include <iostream>
using namespace std;
int main(void) {
    int test_num;
    int res = 1;

    cin >> test_num;
    
    cout << 1 << " ";
    for(int i=1; i<=test_num; i++) {
        res *= 2;
        cout << res << " ";
    }

    return 0;
}