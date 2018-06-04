#include <iostream>

using namespace std;
// void Print(int i, int value) {
//     cout << "#" << i+1 << " " << value << endl;
// }

int main(void) {
    int test_num;
    int max = 0;
    cin >> test_num;

    for(int i=0; i<test_num; i++) {
        for(int j=0; j<10; j++) {
            int n;
            cin >> n;
            if(n > max) {
                max = n;
            } 
        }
        cout << "#" << i+1 << " " << max << endl;
        max = 0;
    }

    return 0;
}