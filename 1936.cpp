#include <iostream>
using namespace std;
int main(void) {
    int test_num1, test_num2;
    
    cin >> test_num1 >> test_num2;
    
    switch(test_num1) {
        case 1:
            if(test_num2 == 2) cout << "B";
            else cout << "A";
            break;
        case 2:
            if(test_num2 == 3) cout << "B";
            else cout << "A";
            break;
        case 3:
            if(test_num2 == 1) cout << "B";
            else cout << "A";
            break;
    }

    return 0;
}