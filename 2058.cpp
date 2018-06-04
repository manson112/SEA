#include <iostream>

using namespace std;

int main(void) {
    int test_num;
    int sum = 0;
    cin >> test_num;
    
    while(test_num != 0) {
        sum += test_num % 10;
        test_num /= 10;
    }

    cout << sum;

    return 0;
}