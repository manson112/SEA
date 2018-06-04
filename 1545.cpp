#include <iostream>
using namespace std;
int main(void) {
    int test_num;

    cin >> test_num;
    
    for(int i=test_num; i>=0; i--) {
        cout << i << " ";
    }

    return 0;
}