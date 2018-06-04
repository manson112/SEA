#include <iostream>

using namespace std;

int main(void) {
    int test_num;
    int sum = 0;
    cin >> test_num;

    for(int i=0; i<test_num; i++) {
        for(int j=0; j<10; j++) {
            int n;
            cin >> n;
            if(n%2 == 1) sum += n; 
        }
        cout << "#" << i+1 << " " << sum << endl;
        sum = 0;
    }

    return 0;
}