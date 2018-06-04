#include <iostream>
using namespace std;
int main(void) {
    int test_num;
    cin >> test_num;

    if(test_num%2 == 0) {
        int s = (1 + test_num)*(test_num/2);
        cout << s;
    } else {
        int s = test_num*((test_num-1)/2) + test_num;
        cout << s;
    }

    return 0;
}