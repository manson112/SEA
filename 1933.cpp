#include <iostream>
using namespace std;
int main(void) {
    int test_num;
    
    cin >> test_num;

    for(int i=1; i<=test_num; i++) {
        if(test_num % i == 0) cout << i << " ";
    }

    return 0;
}